/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:23:50 by bchabot           #+#    #+#             */
/*   Updated: 2022/03/31 17:01:23 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*buf;

	i = 0;
	buf = (char *)s;
	while (buf[i])
	{
		if (buf[i] == c)
			return (buf + i);
		i++;
	}
	if (c == '\0')
		return (buf + i);
	return (NULL);
}

/*
int	main(void)
{
	char *s = "LOL6OLOLOLOLOLALO";
	char c = '6';

	printf("%s", ft_strchr(s, c));
	printf("%s", strchr(s, c));
	return (0);
}
*/
