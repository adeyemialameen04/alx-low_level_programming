
/**
 * swap_int - Swap two integers
 * @a: First int
 * @b: Secong int
 * Description: This function takes as an argument to two pointer to be swapped
 */
void swap_int(int *a, int *b)
{
int temp = 0;
temp = *a;
*a = *b;
b = temp;
}
