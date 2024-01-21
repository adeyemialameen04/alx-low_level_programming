#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: A double pointer to a char.
 * @to: A pointer to a char whose value is to be set.
 */
void set_string(char **s, char *to)
{
*s = to;
}
