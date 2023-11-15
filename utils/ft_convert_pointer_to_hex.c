/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_pointer_to_hex.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:10:11 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/15 14:55:20 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_convert_pointer_to_hex(uint64_t bin_n)
{
	char	*hex_str;
	char	hex_digits[17];
	int		hex_len;
	int		index;

	if (bin_n == 0)
		return (ft_strdup("0x0"));
	hex_len = ft_hexlen(bin_n);
	hex_str = (char *)malloc(sizeof(char) * (hex_len + 3));
	if (!hex_str)
		return (NULL);
	*(hex_str + (hex_len + 2)) = '\0';
	ft_strcpy(hex_digits, "0123456789abcdef");
	index = hex_len + 1;
	while (hex_len-- > 0)
	{
		hex_str[index--] = hex_digits[bin_n & 0xF];
		bin_n >>= 4;
	}
	hex_str[0] = '0';
	hex_str[1] = 'x';
	return (hex_str);
}
