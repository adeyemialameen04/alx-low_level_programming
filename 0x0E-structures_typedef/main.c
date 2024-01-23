#include "main.h"
#include <stdlib.h>
#include  <stdio.h>
#include <limits.h>
#include <string.h>


void simple_print_buffer(int *buffer, unsigned int size);


int main(void)
{
    int *a;
    a = array_range(0, 10);
    simple_print_buffer(a, 11);
    free(a);
    return (0);
}



