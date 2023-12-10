/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlexx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 02:02:32 by mbenchel          #+#    #+#             */
/*   Updated: 2023/11/28 01:07:07 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handlexx(va_list args, int i)
{
	unsigned int	nb;

	nb = va_arg(args, unsigned int);
	if (i)
		return (ft_putnbr(nb, "0123456789abcdef"));
	return (ft_putnbr(nb, "0123456789ABCDEF"));
}
