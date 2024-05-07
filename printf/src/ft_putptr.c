/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dguerin <dguerin@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:55:57 by dguerin           #+#    #+#             */
/*   Updated: 2024/05/03 18:09:45 by dguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/libft.h"

int	ft_putptr(va_list params)
{
	unsigned long	adress;
	void			*ptr;
	int				size;

	size = 0;
	ptr = (void *) va_arg(params, void *);
	adress = (unsigned long) ptr;
	if (adress == 0x0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	ft_putstr_fd("0x", 1);
	ft_putunbr_base(adress, "0123456789abcdef");
	if (adress == 0)
		return (3);
	while (adress != 0)
	{
		adress /= 16;
		size++;
	}
	return (size + 2);
}
