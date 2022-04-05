/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 10:45:25 by bchabot           #+#    #+#             */
/*   Updated: 2022/04/05 14:33:09 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*tab;
	int		i;
	int		x;

	x = ft_strlen(s1);
	i = 0;
	tab = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!tab)
		return (NULL);
	while (1)
	{
	}
	return (tab);
}

int	main(void)
{
	char str[] = "lorem ipsum dolor sit amet";
	char set[] = "te";

	printf("%s", ft_strtrim(str, set));
	return (0);
}
