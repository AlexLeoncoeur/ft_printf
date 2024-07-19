/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarenas- <aarenas-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:27:59 by aarenas-          #+#    #+#             */
/*   Updated: 2024/05/10 16:34:25 by aarenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char const *str, ...);
void	ft_putstr(char *str, int *p_w);
void	ft_putchar(char c, int *printed_words);
void	ft_printf_putnbr_dec(long int nb, int *p_w);
void	ft_printf_putnbr_hexa(unsigned long long nb, char c, int *p_w);

#endif