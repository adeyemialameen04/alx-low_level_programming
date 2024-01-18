#include <stdio.h>
#include "main.h"

int main(void)
{
    // int n = 900;
    // printf("%d\n", n);
    //  reset_to_98(&n);
    // printf("%d\n", n);
    // // int x = 0, y=0;
    // char s[10] = "My School";

    // printf("%s\n", s);
    // rev_string(s);
    // printf("%s\n", s);
    // return (0);

    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}