/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handleuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:43:03 by mbenchel          #+#    #+#             */
/*   Updated: 2023/11/25 17:21:32 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handleuint(va_list args)
{
	unsigned int	num;

	num = va_arg(args, int);
	return (ft_putnbr(num, "0123456789"));
}
