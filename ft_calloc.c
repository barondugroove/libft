/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:11:17 by bchabot           #+#    #+#             */
/*   Updated: 2022/04/12 12:45:56 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb >= 9223372036854775807 || size >= 9223372036854775807)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (malloc(1));
	ptr = malloc(size * nmemb);
	if (!ptr)
		return (ptr);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
