/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:41:29 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/11 11:40:03 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *ptr_chars_printed);
void	ft_putstr(char *str, int *ptr_chars_printed);
void	ft_putnbr(int n, int *ptr_chars_printed);
char	*ft_itoa(int n);
char	*ft_unsigned_itoa(int n);
void	ft_unsigned_putnbr(int n, int *ptr_chars_printed);
#endif
