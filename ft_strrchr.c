/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:08:33 by bchabot           #+#    #+#             */
/*   Updated: 2022/03/31 17:57:18 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*buf;

	i = 0;
	buf = (char *)s;
	while (buf[i])
		i++;
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

/*
int	main(void)
{
	char *s = "";
	char c = 'b';

	printf("%s\n", ft_strrchr(s, c));
	printf("%s\n", strrchr(s, c));
	return (0);
}
*/
