/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:10:57 by egomez            #+#    #+#             */
/*   Updated: 2023/11/25 11:55:31 by egomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

#include <stdio.h>

int	ft_printf(const char *arg0, ...)
{
	va_list args;
	int	nb_arg;
	int	i;

	nb_arg = 0;
	i = 0;
	va_start(args, arg0);
	while (arg0[i] != 0)
	{
		if (arg0[i] == '%')
		{ 
			ft_converttreatment(arg0[i + 1], args);
			i++;
		}
		else
			write(1, &arg0[i], 1);
		i++;
	}
	va_end(args);
	return (nb_arg);
}

int	main()
{
	ft_printf("%x %X", 42, 42);
	printf("\n%x %X", 42, 42);
}
