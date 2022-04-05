/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:36:26 by bchabot           #+#    #+#             */
/*   Updated: 2022/04/04 15:52:35 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	int		longueur;

	longueur = ft_strlen(s1) + ft_strlen(s2) + 1;
	tab = malloc(sizeof(char) * longueur);
	if (!tab)
		return (NULL);
	ft_strlcpy(tab, s1, longueur);
	ft_strlcat(tab, s2, longueur);
	return (tab);
}

/*
int main(void)
{
	char s1[] = "lorem ipsum";
	char s2[] = "boubiboubi";

	printf("%s", ft_strjoin(s1, s2));
	return (0);
}*/
