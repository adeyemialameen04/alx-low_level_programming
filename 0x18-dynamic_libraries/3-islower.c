#include "main.h"

/**
 * _islower - Checks if a character is a lowercase letter.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if the character is a lowercase letter, 0 otherwise.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
