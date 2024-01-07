#include "main.h"
#include  <stdio.h>

int main(void)
{
// int result;
// result = _isupper('a');
// printf("%d\n", result);

    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}