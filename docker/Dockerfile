FROM ubuntu

WORKDIR /app

COPY build/bin/server server

EXPOSE 8089/udp

ENTRYPOINT [ "./server" ]

