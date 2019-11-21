/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 17:21:09 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/19 21:31:48 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*look;
	char	*search;
	size_t	i;
	size_t	j;

	look = (char *)needle;
	search = (char *)haystack;
	i = 0;
	j = 0;


	if (!look && !search)
		return (&(search[0]));
	while ((i < len && search[i] != '\0'))
	{
		if (search[i] == look[j])
			j++;
		else
			j = 0;
		i++;
		if (look[j] == '\0')
			return (&(search[i - j]));
	}
	return (NULL);
}
