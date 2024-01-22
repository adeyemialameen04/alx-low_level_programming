#include <stdlib.h>

/**
* alloc_grid - Allocates a 2-dimensional array of integers.
* @width: The width of the grid.
* @height: The height of the grid.
*
* Return: A pointer to the allocated 2-dimensional array.
*         NULL on failure or if width or height is 0 or negative.
*/
int **alloc_grid(int width, int height)
{
int i, j;
int **grid;
if (width <= 0 || height <= 0)
return (NULL);

grid = (int **)malloc(sizeof(int *) * height);

if (grid == NULL)
return (NULL);


for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(sizeof(int) * width);

if (grid[i] == NULL)
{

for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}

return (grid);
}
