/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 16:04:13 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/12/02 18:35:13 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*ptr_cpy;
	int		s1_long;

	if (!s1)
		return (0);
	s1_long = ft_strlen(s1);
	ptr_cpy = (char *)malloc(sizeof(*ptr_cpy) * (s1_long + 1));
	if (!ptr_cpy)
		return (NULL);
	return (ft_strcpy(ptr_cpy, s1));
}
