#include <stdio.h>
#include "main.h"

void simple_print_buffer(char *buffer, unsigned int size);

int main(void)
{
    char *f;

    f = _strchr("First, solve the problem. Then, write the code.", '\0');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}







































void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int i;

        i = 0;
        while (i < size)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
}
