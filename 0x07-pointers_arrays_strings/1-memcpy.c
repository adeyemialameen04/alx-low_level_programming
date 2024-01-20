
/**
 * _memcpy - Copies n bytes from source memory to destination memory.
 *
 * @dest: A pointer to the destination memory.
 * @src: A pointer to the source memory.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination memory.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
