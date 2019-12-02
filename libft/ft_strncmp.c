/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 01:38:21 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/21 19:59:38 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (!n && ft_strlen(s1) != ft_strlen(s2))
		return (0);
	while (str1[i] != '\0' && str2[i] != '\0' && i < n - 1)
	{
		if (str1[i] != str2[i])
			break ;
		i++;
	}
	return (str1[i] - str2[i]);
}

/*
** int			ft_strncmp(const char *s1, const char *s2, size_t n)
** {
** 	size_t i;
**
** 	i = 0;
** 	if (!n)
** 		return (0);
** 	while ((s1[i] == s2[i] && i < n - 1) && s1[i] != '\0' && s2[i] != '\0')
** 	{
** 		i++;
** 	}
** 	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
** }
*/
