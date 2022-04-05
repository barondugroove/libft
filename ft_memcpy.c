/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:23:19 by bchabot           #+#    #+#             */
/*   Updated: 2022/04/01 20:05:15 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst;
	char	*sc;

	i = 0;
	dst = (char *)dest;
	sc = (char *)src;
	while (i < n)
	{
		dst[i] = sc[i];
		i++;
	}
	return (dest);
}
