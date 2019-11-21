/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 18:12:11 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/17 18:45:35 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Escribe "len" veces el valor de "c" al string de *b
** Return: el string de *b con los cambios.
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*s1;

	s1 = b;
	i = 0;
	while (i < len)
	{
		s1[i] = c;
		i++;
	}
	return (s1);
}
