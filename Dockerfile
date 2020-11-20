FROM debian:bullseye
RUN apt update && \
    apt install -y \
        build-essential \
        cmake \
        git \
        g++-10 && \
    mkdir -p /code 
VOLUME ["/code"]
