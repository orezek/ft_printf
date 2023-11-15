/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:41:29 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/15 23:49:11 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <string.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *ptr_chars_printed);
void	ft_putstr(char *str, int *ptr_chars_printed);
void	ft_putnbr(int n, int *ptr_chars_printed);
char	*ft_itoa(int n);
char	*ft_unsigned_itoa(int n);
void	ft_putnbr_unsigned(int n, int *ptr_chars_printed);
char	*ft_convert_number_to_hex(uint64_t bin_n);
int		ft_strlen(char *str);
int		ft_hexlen(uint64_t bin_n);
char	*ft_convert_pointer_to_hex(uint64_t bin_n);
char	*ft_strcpy(char *dest, char *src);
void	ft_putptr(void *ptr_address, int *ptr_chars_printed);
void	ft_puthex(int ptr_address, int *ptr_chars_printed);
int		ft_toupper(int c);
void	ft_puthex_upper(int ptr_address, int *ptr_chars_printed);
void	ft_putstr_upper(char *str, int *ptr_chars_printed);
char	*ft_strdup(char *src);
int		ft_printf_short(char *format, int *ptr_chars_printed, va_list *args);
#endif
