/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <bchabot@student.42angouleme.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:10:28 by bchabot           #+#    #+#             */
/*   Updated: 2022/04/12 12:33:08 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*buf;

	buf = (char *)s;
	i = ft_strlen(s);
	if (c == '\0')
		return (buf + i);
	while (i >= 0)
	{
		if (buf[i] == c)
			return (buf + i);
		i--;
	}
	return (NULL);
}
