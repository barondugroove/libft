/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:27:20 by bchabot           #+#    #+#             */
/*   Updated: 2022/04/07 11:16:31 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_intlen(int n)
{
	int	i;

	i = 1;
	while (n >= 10 || n <= -10)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*tab;
	int				i;
	unsigned int	x;
	int				neg;

	x = n;
	neg = 0;
	if (n < 0)
	{
		x = -n;
		neg = 1;
	}
	i = ft_intlen(n);
	tab = malloc(sizeof(char) * (i + 1 + neg));
	if (!tab)
		return (NULL);
	i += neg;
	if (neg)
		tab[0] = '-';
	tab[i] = '\0';
	while (i-- >= neg && x >= 10)
	{
		tab[i] = (x % 10) + '0';
		x /= 10;
	}
	tab[i] = x + '0';
	return (tab);
}
