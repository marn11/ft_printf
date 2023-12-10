/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:42:14 by mbenchel          #+#    #+#             */
/*   Updated: 2023/12/05 20:56:38 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int			ft_printf(const char *str, ...);
int			ft_handlexx(va_list args, int i);
int			handlecategory(const char *str, va_list args, int i);
int			ft_putstr(char *str);
int			ft_putchar(char c);
int			ft_strlen(char *str);
int			ft_putnbr(long nb, char *base);
int			handlechar(va_list args);
int			handleuint(va_list args);
int			handleintd(va_list args);
int			ft_handlep(va_list args);
int			handlestr(va_list args);
#endif