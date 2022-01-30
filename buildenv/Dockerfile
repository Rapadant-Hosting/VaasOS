# Install the required repo(s)
FROM randomdude/gcc-cross-x86_64-elf


# Update the build ENV
RUN apt-get update
RUN apt-get upgrade -y


# Install common enviornment stuff
RUN apt-get install -y protobuf-compiler
RUN apt-get install -y lzma
#RUN apt-get install -y tiny-aes-c


# Install C dependancy stuff(compiling C stuff)
RUN apt-get install -y nasm
RUN apt-get install -y xorriso
RUN apt-get install -y grub-pc-bin
RUN apt-get install -y grub-common


# Setting up our volume stuff
VOLUME /root/env
WORKDIR /root/env