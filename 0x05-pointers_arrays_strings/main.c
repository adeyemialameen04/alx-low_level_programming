#include <stdio.h>
#include "main.h"

int main(void)
{
    // int n = 900;
    // printf("%d\n", n);
    //  reset_to_98(&n);
    // printf("%d\n", n);
    // int x = 0, y=0;
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);

}