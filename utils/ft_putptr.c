/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:39:54 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/14 13:05:37 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putptr(int ptr_address, int *ptr_chars_printed)
{
	char	*ptr_address_str;

	ptr_address_str = ft_convert_pointer_to_hex((u_int64_t)ptr_address);
	ft_putstr(ptr_address_str, ptr_chars_printed);
	free(ptr_address_str);
}
