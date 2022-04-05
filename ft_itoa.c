/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:27:20 by bchabot           #+#    #+#             */
/*   Updated: 2022/04/05 12:09:09 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_itoa(int n)
{
	char	*tab;
	int		x;
	int		i;

	i = 1;
	x = n;
	while (x > 10)
	{
		x /= 10;
		i++;
	}
	tab = malloc(sizeof(int) * i);
	while (i--)
	{
		tab[i] = (n % 10) + '0';
		n /= 10;
	}
	tab[i] = n;
	return (tab);
}

/*
int main(void)
{
	int i = 544557;

	printf("%s", ft_itoa(i));
	return (0);
}*/
