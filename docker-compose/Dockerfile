FROM ubuntu

RUN apt-get update && apt-get install cmake g++ -y

WORKDIR /development

EXPOSE 8089/udp

ENTRYPOINT [ "/bin/tail", "-f", "/dev/null" ]

