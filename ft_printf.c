/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:27:30 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/09 22:44:05 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	va_list	args_cpy;
	int	chars_printed;
	int	*ptr_chars_printed;

	chars_printed = 0;
	ptr_chars_printed = &chars_printed;
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
				ft_putstr(va_arg(args, char *), ptr_chars_printed);
			else if (*format == 'd')
				//ft_putnbr(va_arg(args, int));
				printf("%d", va_arg(args, int));
			else if (*format == 'c')
				ft_putchar(va_arg(args, int), ptr_chars_printed);
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
				ft_putchar('%', ptr_chars_printed);
			else
				return (-1);
		}
		else
			ft_putchar(*format, ptr_chars_printed);
		format++;
	}
	va_end(args);
	return (chars_printed);
}
