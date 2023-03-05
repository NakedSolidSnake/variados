FROM ubuntu

RUN apt-get update && apt-get install pip cmake g++ -y

RUN pip install conan==1.59

WORKDIR /development

EXPOSE 8089

ENTRYPOINT [ "/bin/tail", "-f", "/dev/null" ]

