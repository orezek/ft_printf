/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_printf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:41:11 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/15 15:22:07 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// cc -Wall -Wextra -Werror tst_printf.c ft_printf.c utils/ft_convert_number_to_hex.c utils/ft_strlen.c utils/ft_hexlen.c utils/ft_strcpy.c utils/ft_putchar.c utils/ft_putnbr.c utils/ft_putptr.c utils/ft_putstr.c utils/ft_putnbr_unsigned.c utils/ft_convert_pointer_to_hex.c utils/ft_itoa.c utils/ft_unsigned_itoa.c utils/ft_puthex.c utils/ft_puthex_upper.c utils/ft_putstr_upper.c utils/ft_toupper.c utils/ft_strdup.c utils/ft_printf_short.c && ./a.out
int	main(void)
{
	int	result1;
	int	result2;
	char *ptr;
	char str[] = "ahoj";
	ptr = str;
	//result1 = ft_printf(" %x ", -1);
	//write(1, "\n", 1);
	//result2 = printf(" %x ", -1);
	//write(1, "\n", 1);
	//printf("ft_printf: %d\n", result1);
	ft_printf(" NULL %s NULL ", NULL);
	//printf("printf: %d\n", result2);
	return (0);
}


