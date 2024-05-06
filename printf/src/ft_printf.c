/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dguerin <dguerin@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:15:38 by dguerin           #+#    #+#             */
/*   Updated: 2024/05/06 10:31:55 by dguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/libft.h"

static int	ft_formats(va_list args, const char format)
{
	if (format == 'c')
		return (ft_putchar(args));
	else if (format == 's')
		return (ft_putstr(args));
	else if (format == 'p')
		return (ft_putptr(args));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(args));
	else if (format == 'u')
		return (ft_putunsigned(args));
	else if (format == 'x')
		return (ft_puthex(args));
	else if (format == 'X')
		return (ft_putupperhex(args));
	else if (format == '%')
		return (ft_putpercent());
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		size;
	int		i;

	i = 0;
	size = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			size += ft_formats(arg, format[i]);
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			size++;
		}
		i++;
	}
	va_end(arg);
	return (size);
}
