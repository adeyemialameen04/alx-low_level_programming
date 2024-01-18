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

    // char *str;

    // str = "0123456789";
    // puts_half(str);
    // return (0);

        int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}