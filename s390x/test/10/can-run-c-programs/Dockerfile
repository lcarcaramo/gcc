FROM quay.io/ibmz/gcc:10.2.0
COPY . /usr/src/myapp
WORKDIR /usr/src/myapp
RUN gcc -o test test.c
CMD ["./test"]
