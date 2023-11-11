/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:09:37 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/11 11:10:39 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_unsigned_putnbr(int n, int *ptr_chars_printed)
{
	char	*ptr;
	char	*or_ptr;

	ptr = ft_unsigned_itoa(n);
	or_ptr = ptr;
	while (*ptr)
		ft_putchar(*(ptr++), ptr_chars_printed);
	free(or_ptr);
}
