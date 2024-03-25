#!/bin/bash
for file in *.c; do
    gcc -c $file
done
ar rc liball.a *.o
