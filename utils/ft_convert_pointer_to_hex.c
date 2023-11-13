/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_pointer_to_hex.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:10:11 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/13 20:12:45 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_convert_pointer_to_hex(u_int64_t bin_n)
{
	char	*hex_str;
	char	*hex_digits;
	int		hex_len;
	int		index;

	hex_len = ft_hexlen(bin_n);
	hex_str = (char *)malloc(sizeof(char) * (hex_len + 3));
	*(hex_str + (hex_len + 2)) = '\0';
	hex_digits = ft_strcpy(hex_digits, "0123456789abcdef");
	index = hex_len + 2;
	while (hex_len > 0)
	{
		hex_str[index--] = hex_digits[bin_n & 0xF];
		bin_n >>= 4;
		hex_len--;
	}
	hex_str[0] = '0';
	hex_str[1] = 'x';
	free(hex_digits);
	return (hex_str);
}
