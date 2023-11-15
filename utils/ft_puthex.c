/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:04:37 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/15 15:04:03 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_puthex(int ptr_address, int *ptr_chars_printed)
{
	char	*ptr_address_str;

	ptr_address_str = NULL;

	ptr_address_str = ft_convert_number_to_hex((uint64_t)ptr_address);
	ft_putstr(ptr_address_str, ptr_chars_printed);
	free(ptr_address_str);
}
