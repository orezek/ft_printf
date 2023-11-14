/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_number_to_hex.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:41:18 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/14 16:18:09 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

// 0b = binary
// 0x = hexadecimal
// 0 = octal
// 0d = decimal

char	*ft_convert_number_to_hex(u_int64_t bin_n)
{
	char	*hex_str;
	char	hex_digits[17];
	int		hex_len;

	hex_len = ft_hexlen(bin_n);
	hex_str = (char *)malloc(sizeof(char) * (hex_len + 1));
	*(hex_str + (hex_len + 1)) = '\0';
	ft_strcpy(hex_digits,"0123456789abcdef");
	while (hex_len >= 0)
	{
		hex_str[hex_len - 1] = hex_digits[bin_n & 0xF];
		bin_n >>= 4;
		hex_len--;
	}

	return (hex_str);
}
