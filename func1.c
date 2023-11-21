/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:32:20 by egolboyu          #+#    #+#             */
/*   Updated: 2023/11/21 15:53:54 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(const char *s)
{
	int		i;

	i = 0;
	if (s)
		while (s[i])
			write(1, &s[i++], 1);
	return (i);
}

int	ft_putnbr(int n)
{
	int		sign;
	char	c;

	sign = 1;
	if (n < 0)
	{
		ft_putchar('-');
		sign = -1;
	}
	if (n / 10)
		ft_putnbr(n / 10 * sign);
	c = '0' + n % 10 * sign;
	ft_putchar(c);
	return (c);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
