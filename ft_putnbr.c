/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpontici <rpontici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 13:46:42 by rpontici          #+#    #+#             */
/*   Updated: 2025/01/15 18:10:44 by rpontici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(va_list x)
{
	char	c;
	int	n;
	int	count;

	n = va_arg(x, int);
	count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		ft_putnbr(n);
		count += 1;
	}
	else if (n <= 9)
	{
		c = n + '0';
		write(1, &c, 1);
		count += 1;
		return (count);
	}
	else
	{
		ft_putnbr(n / 10);
		c = (n % 10) + '0';
		write(1, &c, 1);
		count += 1;
	}
	return (-1);
}
