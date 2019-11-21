/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 01:39:08 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/17 20:07:16 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *dst;

	i = start;
	if (!s)
	{
		return (0);
	}
	while (i < len)
	{
		dst[i] = s[i];
		i++;
	}
	return (dst);
}
