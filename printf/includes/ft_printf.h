/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dguerin <dguerin@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:08:00 by dguerin           #+#    #+#             */
/*   Updated: 2024/05/06 10:12:17 by dguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(va_list params);
int		ft_putstr(va_list params);
int		ft_putnbr(va_list params);
int		ft_putunsigned(va_list params);
int		ft_puthex(va_list params);
int		ft_putupperhex(va_list params);
int		ft_putptr(va_list params);
int		ft_putpercent(void);

#endif
