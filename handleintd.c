/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handleintd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 21:04:30 by mbenchel          #+#    #+#             */
/*   Updated: 2023/11/28 00:39:39 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handleintd(va_list args)
{
	long	num;

	num = va_arg(args, int);
	return (ft_putnbr(num, "0123456789"));
}
