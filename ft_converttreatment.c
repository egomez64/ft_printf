/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converttreatment.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:30:47 by egomez            #+#    #+#             */
/*   Updated: 2023/11/25 11:52:20 by egomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_converttreatment(char c, va_list arg)
{
	if (c == 'c')
		ft_putchar(va_arg(arg, unsigned int));
	if (c == 's')
		ft_putstr(va_arg(arg, char *));
	if (c == 'p')
		ft_putptr_hex(va_arg(arg, unsigned long long));
	if (c == 'd' || c == 'i')
	 	ft_putnbr(va_arg(arg, int));
	/*if (c == "u")
		ft_putunbr(int form);*/
	if (c == 'x')
		ft_putnbr_hex(va_arg(arg, unsigned int), 'x');
	if (c == 'X')
		ft_putnbr_hex(va_arg(arg, unsigned int), 'X');
	/*if (c == "%")
		write(1, "%", 1);*/

}
