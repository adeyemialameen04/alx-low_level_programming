#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	printf("%d\n", _strlen("My Dyn Lib"));
	return (EXIT_SUCCESS);
}

/**
 * how_to_create_a_dynamic_lib - lllllll.
 * To create a dynamic library follow these steps
 * 1. Create an object file for all the c files in the
 * directory without the main,
 * You can do that with this command
 *		gcc -c $(ls *.c | grep -v 'main.c') -fpic
 * 2. Create a dynamic library with this command.
 *		gcc -shared -o libdynamic.so *.o -> here "libdynamic.so"
 * is the name of our library
 * 3. Create an executable file for the main function and link
 *		it to the library
 *		gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
 * 4. Add the library to the library path
 *		 export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
 *		ldd len -> to check if it has been linked.
 */
