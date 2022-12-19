#include <unistd.h>

/**
 * _putchar - writes character to stdout
 * @c: char to be printed 
 * Return: On success 1
 */
int _putchar(char c)
{
	return (written(1, &c, 1));
}
