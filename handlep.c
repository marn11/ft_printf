/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlep.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 23:29:49 by mbenchel          #+#    #+#             */
/*   Updated: 2023/12/04 18:20:50 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	printbase(unsigned long n)
{
	char	buf[16];
	int		i;
	int		r;

	i = 0;
	r = 0;
	r += ft_putstr("0x");
	if (n == 0)
		buf[i++] = '0';
	while (n)
	{
		buf[i++] = "0123456789abcdef"[n % 16];
		n = n / 16;
	}
	while (i-- > 0)
		r += ft_putchar(buf[i]);
	return (r);
}

int	ft_handlep(va_list args)
{
	unsigned long		n;
	unsigned char		*ptr;

	ptr = va_arg(args, unsigned char *);
	n = (unsigned long)ptr;
	return (printbase(n));
}
