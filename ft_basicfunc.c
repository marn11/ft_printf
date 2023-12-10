/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basicfunc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:41:23 by mbenchel          #+#    #+#             */
/*   Updated: 2023/11/27 00:03:06 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (str[i])
	{
		r += ft_putchar(str[i]);
		i++;
	}
	return (r);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putnbr(long nb, char *base)
{
	int	res;
	int	baselen;

	res = 0;
	baselen = ft_strlen(base);
	if (nb < 0)
	{
		res += ft_putchar('-');
		nb *= -1;
	}
	if (nb >= baselen)
	{
		res += ft_putnbr(nb / baselen, base);
		res += ft_putnbr(nb % baselen, base);
	}
	else if (nb >= 0 && nb < baselen)
		res += ft_putchar(base[nb]);
	return (res);
}
