#include <stdio.h>

/**
 * reverse_array - Prints the elements of an array in reverse order.
 * @a: The array of integers.
 * @n: The number of elements in the array.
 *
 * Description: This function prints the elements of the given array in
 * reverse order, separating them with a comma except for the last element.
 *
 * Return: void (no return value)
 */
void reverse_array(int *a, int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        // Swap elements at start and end indices
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        // Move indices towards each other
        start++;
        end--;
    }
}
