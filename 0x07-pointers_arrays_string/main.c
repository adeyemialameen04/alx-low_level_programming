#include <stdio.h>
#include "main.h"

void simple_print_buffer(char *buffer, unsigned int size);

int main(void)
{
    char buffer[20];

    // Example 1: Fill the first 10 bytes with 'A' (ASCII value 65)
    _memset(buffer, 'A', 10);
    printf("Example 1: %s\n", buffer);

    // Example 2: Fill the entire buffer with 'B' (ASCII value 66)
    _memset(buffer, 'B', sizeof(buffer));
    printf("Example 2: %s\n", buffer);

    // Example 3: Fill the first 5 bytes with 0x42 (decimal 66)
    _memset(buffer, 0x42, 5);
    printf("Example 3: ");
    for (int i = 0; i < 10; i++) {
        printf("0x%02x ", buffer[i]);
    }
    printf("\n");

    return 0;

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
