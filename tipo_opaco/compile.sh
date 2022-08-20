#!/bin/bash 

gcc -I. -c main.c -o main.o
gcc -I. -c person.c -o person.o
gcc -o person.out main.o person.o