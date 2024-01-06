#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the times table up to a given number.
 * @n: The highest value for the times table (0 to 15).
 */
void print_times_table(int n)
{
    int row, column, product;

    if (n >= 0 && n <= 15)
    {
        for (row = 0; row <= n; row++)
        {
            for (column = 0; column <= n; column++)
            {
                product = row * column;

                if (column != 0)
                {
                    printf(", ");
                    if (product < 10)
                        printf("  ");
                    else if (product < 100)
                        printf(" ");
                }

                printf("%d", product);
            }
            printf("\n");
        }
    }
}


// #include "main.h"
// #include <stdio.h>

// /**
//  * times_table - Prints the 9 times table, starting with 0.
//  */
// void times_table(void)
// {
//     int i, input, result;

//     for (i = 0; i <= 9; i++)
//     {
//         for (input = 0; input <= 9; input++)
//         {
//             result = i * input;
//             if (result >= 0 && result <= 9 && i != 0 && result != 9)
// {
// printf("  %d,", result);
// }
// else if (input == 0)
// {
// printf("%d,", result);
// } 
// else if (input == 9)
// {
//     printf(" %d", result);
// }
// else {
// printf(" %d,", result);
// }
//         }
//         printf("\n");
//     }
// }
