#include <unistd.h>
#include "main.h"

/**
  * _puthar - writes the char c to stdout
  * @c: the charter to print 
  * Return: on success 1 else -1
  */
int _putchsr(char c)
{
	return (write(1, &c, 1));
}
