/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 11:35:04 by egomez            #+#    #+#             */
/*   Updated: 2023/11/25 11:47:06 by egomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putptr_hex(unsigned long long ptr)
{
	char base[16] = "0123456789abcdef";
	if (ptr / 16 != 0)
		ft_putptr_hex(ptr / 16);
	else
		write(1, "0x", 2);
	ft_putchar(base[ptr % 16]);
}
