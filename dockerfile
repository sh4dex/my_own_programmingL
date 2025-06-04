# Usa la imagen oficial de Ubuntu
FROM ubuntu:latest

RUN apt-get update && \
    apt-get install -y gcc make git nano && \
    apt-get install -y bison flex && \
    rm -rf /var/lib/apt/lists/*

# Crea un directorio para el proyecto
WORKDIR /app

# Copia los archivos (se sincronizarán luego con el volumen)
COPY . .

# Comando por defecto (puedes cambiarlo)
CMD ["/bin/bash"]