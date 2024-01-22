#include <stdio.h>
char *argstostr(int ac, char **av)
{
int i;
char *new_string;
printf("%d\n", ac);
for (i = 0; i < ac; i++)
{
printf("%s\n", av[i]);
new_string = av[i];
}

// printf
}