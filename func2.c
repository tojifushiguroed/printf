/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:32:24 by egolboyu          #+#    #+#             */
/*   Updated: 2023/11/21 15:32:25 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_u(unsigned int u)
{
	int	i;

	i = 0;
	if (u >= 0 && u <= 9)
		i += ft_putchar(u + '0');
	else
	{
		i += ft_u(u / 10);
		i += ft_u(u % 10);
	}
	return (i);
}

int	ft_pointer(unsigned long p)
{
	int	i;

	i = 0;
	if (p >= 16)
		i += ft_pointer(p / 16);
	if ((p % 16) < 10)
		i += ft_putchar((p % 16) + '0');
	else
		i += ft_putchar((p % 16) - 10 + 'a');
	return (i);
}

int	ft_hex(unsigned int x, int b)
{
	int	i;

	i = 0;
	if (x >= 16)
		i += ft_hex(x / 16, b);
	if ((x % 16) < 10)
		i += ft_putchar((x % 16) + '0');
	else
	{
		if (b == 0)
			i += ft_putchar((x % 16) - 10 + 'a');
		else
			i += ft_putchar((x % 16) - 10 + 'A');
	}
	return (i);
}
