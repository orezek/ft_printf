/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:51:45 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/09 21:53:37 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putstr(char *str, int *ptr_chars_printed)
{
	while (*str)
		ft_putchar(*(str++), ptr_chars_printed);
}
