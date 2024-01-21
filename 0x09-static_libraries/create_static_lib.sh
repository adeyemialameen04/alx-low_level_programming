#!/bin/bash
for file in $(find . -name "*.c"); do
gcc -c "$file"
done