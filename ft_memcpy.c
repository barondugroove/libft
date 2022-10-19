/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <bchabot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:23:19 by bchabot           #+#    #+#             */
/*   Updated: 2022/10/19 12:49:36 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst;
	char	*sc;

	i = 0;
	dst = (char *)dest;
	sc = (char *)src;
	if (!dst && !sc)
		return (NULL);
	while (i < n)
	{
		dst[i] = sc[i];
		i++;
	}
	return (dest);
}
