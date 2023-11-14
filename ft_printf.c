/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:27:30 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/14 16:00:13 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	va_list	args_cpy;
	int		chars_printed;
	int		*ptr_chars_printed;

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
				ft_putnbr(va_arg(args, int), ptr_chars_printed);
			else if (*format == 'c')
				ft_putchar(va_arg(args, int), ptr_chars_printed);
			else if (*format == 'p')
				ft_putptr(va_arg(args, int), ptr_chars_printed);
			else if (*format == 'i')
				ft_putnbr(va_arg(args, int ), ptr_chars_printed);
			else if (*format == 'u')
				ft_putnbr_unsigned(va_arg(args, unsigned int), ptr_chars_printed);
			else if (*format == 'x')
				ft_puthex(va_arg(args, unsigned int), ptr_chars_printed);
			else if (*format == 'X')
				ft_puthex_upper(va_arg(args, unsigned int), ptr_chars_printed);
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
