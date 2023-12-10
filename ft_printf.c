/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:44:24 by mbenchel          #+#    #+#             */
/*   Updated: 2023/12/01 03:33:22 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handlecategory(const char *str, va_list args, int i)
{
	if (str[i])
	{
		if (str[i] == 'c')
			return (handlechar(args));
		else if (str[i] == 's')
			return (handlestr(args));
		else if (str[i] == 'p')
			return (ft_handlep(args));
		else if (str[i] == 'd' || str[i] == 'i')
			return (handleintd(args));
		else if (str[i] == 'u')
			return (handleuint(args));
		else if (str[i] == 'x')
			return (ft_handlexx(args, 1));
		else if (str[i] == 'X')
			return (ft_handlexx(args, 0));
		else
			return (ft_putchar(str[i]));
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(args, str);
	if (write(1, "", 0) < 0)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
		{
			j += handlecategory(str, args, i + 1);
			i++;
		}
		else
			j += ft_putchar(str[i]);
		if (str[i])
			i++;
	}
	va_end(args);
	return (j);
}
