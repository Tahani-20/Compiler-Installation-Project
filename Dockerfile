FROM ubuntu:latest

RUN apt-get update && apt-get install -y flex gcc build-essential

WORKDIR /app

COPY . /app

CMD ["/bin/bash"]