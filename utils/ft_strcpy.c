/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:15:06 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/13 18:15:11 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_strcpy(char *des, char *src)
{
	int		i;
	char	*ptr_des;

	des = malloc(sizeof(char) * (ft_strlen(src) + 1));
	ptr_des = des;
	i = 0;
	while (*src)
	{
		*des++ = *src++;
	}
	*des = '\0';
	return (ptr_des);
}
