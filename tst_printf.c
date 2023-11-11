/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_printf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:41:11 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/11 11:43:36 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//cc tst_printf.c ft_printf.c utils/ft_putchar.c utils/ft_putstr.c utils/ft_putnbr.c&& ./a.out


// The function prints whatever is in the first argument as long as it is a string.
// In the first argument which must a string is possible to insert a variable with the % sign.
// The variable must be inserted in the second argument and they must be in the same order.
// The variables are represented by letters: s, d, c, p, i, u, x, X, %.
// s = string, d = decimal, c = char, p = pointer,
// i = integer, u = unsigned, x = hexadecimal, X = hexadecimal, % = %.
// The function converts digits into hexadecimal.
// The function can take multiple arguments.
// The function returns the number of characters printed.
// !! maybe - find out!! The function returns -1 if the first argument is not a string.
// cspdiuxX%


// variadig arguments
// va_arg(args, type) - returns the next argument in the list of arguments.
	// it is a stateful function, it keeps track of the arguments it has already returned.
// va_start(args, last_arg) - initializes the list of arguments. The last_arg is the last named
	//argument before the ellipsis.
// va_end(args) - ends the list of arguments.
// va_copy(args_cpy, args) - copies the list of arguments.

// Does moulinette test for the number of characters printed?
// Does moulinette test for the return value of the function?
// Does moulinette test for number of arguments and if they match the format?

// Todo: implement conversion functions for all types.
// Todo: implement number of printed characters function.
// cc tst_printf.c ft_printf.c utils/ft_putchar.c utils/ft_putstr.c utils/ft_putnbr.c utils/ft_itoa.c utils/ft_unsigned_itoa.c utils/ft_unsigned_putnbr.c && ./a.out
int	main(void)
{
	int result;
	char *ptr;
	char str[] = "This is a string.";
	char	*s_ptr;

	s_ptr = NULL;
	ptr = str;
	result = ft_printf("My first integer: %u\n", -123456);
	printf("Result is: %d\n", result);
	return (0);
}


