/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 01:39:06 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/12/02 20:36:17 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*str;

	i = 0;
	k = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (ft_strcpy(ft_memalloc(sizeof(char) * 2), ""));

	j = ft_strlen(s) - 1;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;

	str = (char *)malloc(sizeof(char) * (j - i + 2));
	if (str == NULL)
		return (NULL);
	while (k < j - i + 1)
		str[k] = s[i + k];
	k++;
	str[k] = '\0';
	return (str);
}
