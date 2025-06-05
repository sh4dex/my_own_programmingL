# Usa la imagen oficial de UbuntuMore actions
FROM ubuntu:latest

RUN apt-get update && \
    apt-get install -y gcc make git nano && \
    apt-get install dos2unix -y && \
    apt-get install -y bison flex && \
    rm -rf /var/lib/apt/lists/*