/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dguerin <dguerin@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:50:49 by dguerin           #+#    #+#             */
/*   Updated: 2024/05/03 14:51:12 by dguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/libft.h"

int	ft_putstr(va_list params)
{
	char	*str;
	int		count;

	str = va_arg(params, char *);
	if (!str)
		str = "(null)";
	count = 0;
	while (*str)
	{
		ft_putchar_fd(*str, 1);
		str++;
		count++;
	}
	return (count);
}
