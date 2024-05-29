/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dguerin <dguerin@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:09:08 by dguerin           #+#    #+#             */
/*   Updated: 2024/05/09 16:13:19 by dguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_putunbr_base(unsigned long nbr, char *base)
{
	if (nbr >= 16)
	{
		ft_putunbr_base(nbr / 16, base);
		ft_putchar_fd(base[nbr % 16], 1);
	}
	else
		ft_putchar_fd(base[nbr], 1);
}
