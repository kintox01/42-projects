/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dguerin <dguerin@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:25:09 by dguerin           #+#    #+#             */
/*   Updated: 2024/05/03 18:06:40 by dguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/libft.h"

int	ft_putnbr(va_list params)
{
	size_t	size;
	int		i;

	size = 0;
	i = (int) va_arg(params, int);
	ft_putnbr_fd(i, 1);
	if (i == 0)
		return (1);
	if (i < 0)
		size++;
	while (i != 0)
	{
		i /= 10;
		size++;
	}
	return (size);
}

