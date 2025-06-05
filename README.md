# Compilador Léxico-Sintáctico

## 🚀 Cómo entrar a la consola del contenedor Docker

1. **Construye y levanta el contenedor**  
   Ejecuta en la terminal, en el directorio del proyecto:

   ```sh
   docker-compose up -d
   ```

2. **Accede a la consola del contenedor**  
   Usa el siguiente comando para abrir una terminal dentro del contenedor llamado `contenedor`:

   ```sh
   docker-compose exec contenedor bash -c "cd app && bash"
   ```

3. **¡Listo!**  
   Ahora puedes ejecutar comandos dentro del contenedor. Te encuentras en la carpeta `app`, donde se encuentran todos los archivos del proyecto.

---

## 📂 Estructura de archivos del proyecto

- `compilersintactic_clean.y` — Gramática Bison/Yacc del compilador.
- `compilerlematic_clean.l` — Analizador léxico (Flex).
- `symbol_table.c` y `symbol_table.h` — Implementación de la tabla de símbolos.
- `test` — Script de compilación y prueba.
- `test.txt` — Archivo de pruebas de código fuente.
- Otros archivos auxiliares y generados (`.tab.c`, `.tab.h`, `lex.yy.c`, `compiler`, etc.).

---

## ⚙️ Compilación y ejecución
El proyecto ya se encuentra compilado, pero si ejecutas el script `./test` como binario, **se compilará de nuevo automáticamente** y ejecutará el compilador sobre el archivo de pruebas.

---

### 📜 ¿Qué hace el script `test`?

> **No es necesario compilar de nuevo el proyecto manualmente**, ya que el archivo binario `compiler` está incluido en el volumen del contenedor.  
> Si deseas probar el compilador directamente, puedes ejecutar:
>
> ```sh
> ./compiler test.txt
> ```
>
> Esto compilará el archivo de prueba escrito en nuestro lenguaje.

Si necesitas recompilar o ejecutar todo el flujo, simplemente ejecuta el script `test`.  
**Recuerda primero dar permisos de ejecución:**

```sh
chmod +x test
```

#### El archivo `test` contiene:

```sh
#!/bin/bash

bison -d compilersintactic_clean.y
flex compilerlematic_clean.l
gcc compilersintactic_clean.tab.c lex.yy.c symbol_table.c -lfl -o compiler
./compiler test.txt
```

---

### ⚠️ Problemas comunes: saltos de línea de Windows

Si al ejecutar el compilador ves errores como:

```
Error: carácter no reconocido ''' al final de la línea X
Error: carácter no reconocido '^M' al final de la línea
```

Esto ocurre porque tu archivo (`test.txt` u otro) tiene saltos de línea de Windows (`\r\n`) y el sistema Linux espera saltos de línea tipo Unix (`\n`).  
¡No te preocupes, somos de la UPTC! Ya hemos previsto esto y el contenedor incluye la herramienta `dos2unix`.

#### **Solución rápida:**

Convierte tu archivo a formato Unix ejecutando:

```sh
dos2unix test.txt
```

¡Y listo! Ahora tu archivo funcionará correctamente en el entorno Linux del contenedor. So EZ for Us
---

## 📝 Explicación del funcionamiento del proyecto

Este proyecto implementa un compilador léxico-sintáctico para un lenguaje propio, utilizando **Flex** para el análisis léxico y **Bison** para el análisis sintáctico. El compilador reconoce variables, operaciones, estructuras de control, funciones, matrices y aserciones, gestionando los símbolos y tipos en una tabla de símbolos propia.

### Principales características

- **Declaración e inicialización de variables** (enteros, decimales, booleanos, cadenas, arreglos y matrices).
- **Asignaciones y operaciones aritméticas/lógicas**.
- **Control de flujo:**  
  - `if`, `else`, `fi`, `while`, `do-while`, `for`, `switch-case`, `try-catch`.
- **Definición y uso de funciones** con parámetros tipados.
- **Aserciones** para comprobaciones en tiempo de ejecución.
- **Gestión de errores sintácticos y semánticos**.

---

## 🛠️ Mejoras y eliminación de conflictos Shift/Reduce

Durante el desarrollo del compilador utilizando **Flex y Bison**, se presentó un conflicto de tipo **Shift/Reduce** en la gramática definida. Este tipo de conflicto ocurre cuando el parser no puede decidir entre desplazar (shift) el siguiente token o reducir (reduce) con una regla gramatical, lo cual es común en lenguajes con ambigüedades sintácticas o precedencias mal definidas.

### Causa del conflicto

El conflicto se originaba principalmente en la definición de expresiones aritméticas y condicionales, especialmente con operadores que comparten precedencia (como `+`, `-`, `*`, `/`, `%`, `==`, `!=`, etc.), así como en el manejo de la instrucción `if` con bloques `else`, y estructuras como `do-while`, `switch-case` y `try-catch`.

### Solución implementada

1. **Precedencia y asociatividad:**  
   Se definieron correctamente las directivas de precedencia usando `%left`, `%right`, etc., en el archivo `.y` para operadores aritméticos y lógicos:

   ```yacc
   %left PLUS MINUS
   %left MULT DIV MOD
   %left EQ DIFF LT GT LEQ GEQ
   %left AND OR
   %right NOT
   ```

   Esto permitió que Bison resolviera automáticamente la mayoría de los conflictos de precedencia.

2. **Separación de condiciones complejas:**  
   Se separaron claramente las condiciones lógicas (`condition` y `conditioncomp`) para hacer explícitas sus reglas y evitar ambigüedad.

3. **Refactorización de la gramática:**  
   Se reestructuraron algunas producciones para evitar solapamientos entre reducciones posibles. En particular:
   - Las estructuras `if`, `else` y `fi` se definieron cuidadosamente con producciones específicas para evitar ambigüedades entre múltiples `if` anidados.
   - El cuerpo (`body`) y las listas de declaraciones (`bodies`) se definieron claramente para controlar el alcance.

4. **Verificación manual y pruebas incrementales:**  
   Tras cada cambio en la gramática, se regeneró el parser y se probó con casos concretos para asegurar que el conflicto se había resuelto sin introducir otros errores.

### Resultado

El conflicto Shift/Reduce fue eliminado y el parser ahora genera correctamente el código sin advertencias o errores de ambigüedad. Además, se validó con múltiples pruebas que incluyen estructuras anidadas, operaciones aritméticas y constructos del lenguaje definidos.

---

**Nota:**  
El directorio local está montado en `/app` dentro del contenedor Docker.