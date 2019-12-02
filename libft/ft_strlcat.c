/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 16:14:06 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/29 13:30:39 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	lendest;
	unsigned int	lenorig;

	lendest = ft_strlen(dest);
	lenorig = ft_strlen(src);
	if (!src)
	{
		return (dest[lendest]);
	}
	else
	{
		j = 0;
		while (j < size)
		{
			dest[lendest] = src[j];
			lendest++;
			j++;
		}
	}
	return (dest[lendest]);
}

