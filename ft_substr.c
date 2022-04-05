/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:59:32 by bchabot           #+#    #+#             */
/*   Updated: 2022/04/04 19:31:28 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*buf;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	buf = malloc(sizeof(char) * (len + 1));
	if (!buf)
		return (NULL);
	while (len--)
		buf[i++] = s[start++];
	buf[i] = '\0';
	return (buf);
}

/*
int	main(void)
{
	char s1[] = "lorem ipsum dolor sit amet";
	int start = 400;

	printf("%s", ft_substr(s1, start, 20));
	return (0);
}*/
