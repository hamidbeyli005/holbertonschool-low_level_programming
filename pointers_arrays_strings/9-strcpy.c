/**
 * _strcpy - Copies the string pointed to by src,
 * including the terminating null byte,
 * to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Description: Copies the string `src` to `dest`
 * including the null terminator.
 * The destination buffer must be large enough to
 * hold the source string and the null terminator.
 *
 * Return: Pointer to `dest`.
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while ((*dest = *src) != '\0')
	{
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}
