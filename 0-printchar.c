#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - produces  number of characters printed
 * @format: constant character
 * Return: num_chars_printed 
i */
int _printf(const char *format, ...)
{
	int i;
	char c;
	char *s;
	va_list args;

	va_start(args, format);
	i = 0;
	while (*format)
	{
		if (*format == '%')
		{
			switch (format[i])
			{
				case 'c':
					c = va_arg(args, int);
					_putchar(c);
					i++;
					break;
				case 's':
					s = va_arg(args, char *);
					
						while (*s != '\0')
						{
							_putchar(s[i]);
						}
						s++;
						i++;
					break;
				case '%':
					_putchar('%');
					i++;
					break;
			}
		}
				else 
				{
            			_putchar(*format);
				i++;
        			}
	}
    			va_end(args);
    			return (i++);
}
