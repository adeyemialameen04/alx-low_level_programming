#include <stdio.h>
#include "main.h"

int main(void)
{
    int n = 900;
    printf("%d\n", n);
     reset_to_98(&n);
    printf("%d\n", n);
    return(0);
}