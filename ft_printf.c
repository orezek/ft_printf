/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:27:30 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/09 16:28:42 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	va_list	args_cpy;

	va_copy(args_cpy, args);
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
				//ft_putstr(va_arg(args, char *));
				printf("%s", va_arg(args, char *));
			else if (*format == 'd')
				//ft_putnbr(va_arg(args, int));
				printf("%d", va_arg(args, int));
			else if (*format == 'c')
				//ft_putchar(va_arg(args, int));
				printf("%c", va_arg(args, int));
			else if (*format == 'p')
				//ft_putnbr(va_arg(args, int *));
				printf("%p", va_arg(args, void *));
			else if (*format == 'i')
				//ft_putnbr(va_arg(args, int));
				printf("%i", va_arg(args, int));
			else if (*format == 'u')
				//ft_putnbr(va_arg(args, unsigned int));
				printf("%u", va_arg(args, unsigned int));
			else if (*format == 'x')
				//ft_putnbr(va_arg(args, unsigned int));
				printf("%x", va_arg(args, unsigned int));
			else if (*format == 'X')
				//ft_putnbr(va_arg(args, unsigned int));
				printf("%X", va_arg(args, unsigned int));
			else if (*format == '%')
				//ft_putchar('%');
				printf("%%");
			else
				return (-1);
		}
		else
			//ft_putchar(*format);
			printf("%c", *format);
		format++;
	}
	va_end(args);
	return (0);
}
