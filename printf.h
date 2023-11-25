/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:09:00 by egomez            #+#    #+#             */
/*   Updated: 2023/11/25 11:43:11 by egomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *arg0, ...);
void	ft_converttreatment(char c, va_list arg);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putnbr_hex(unsigned int nbr, char form);
void	ft_putptr_hex(unsigned long long ptr);

#endif
