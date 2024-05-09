/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dguerin <dguerin@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 00:49:50 by dguerin           #+#    #+#             */
/*   Updated: 2024/04/25 15:43:01 by dguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

size_t  ft_strlcat(char *dst, const char*src, size_t size)
{
    size_t  i;
    size_t  j;
    i = 0;
    j = 0;
    while (dst[i] && i < size)
        i++;
    while (src[j] && i + j + 1 < size)
    {
        dst[i + j] = src[j];
        j++;
    }
    if (i < size)
        dst[i + j] = '\0';
    return (i + ft_strlen(src));
}
