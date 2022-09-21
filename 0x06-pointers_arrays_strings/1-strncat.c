/**
 * _strncat - concatinate 2 strings.
 * @dest: first string.
 * @src: second string.
 * @n: the number of bytes to use from src.
 * Return: string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++);
	while (src[i] != '\0' && i < n)
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
