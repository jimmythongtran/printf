#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

int print_c (va_list args)
{
	_putchar(va_arg(args, int));
	return(1);
}

