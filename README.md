# Compilador Léxico-Sintáctico

## Cómo entrar a la consola del contenedor Docker

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
   Ahora puedes ejecutar comandos dentro del contenedor.

---

**Nota:**  
El directorio local está montado en `/app` dentro del contenedor.