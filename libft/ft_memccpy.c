/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 01:37:20 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/15 20:38:13 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La  función  memccpy()  copia  como mucho n bytes desde el área de memoria
**< orig
** al área de memoria dest, parando cuando se encuentra el carácter c.
**
** La función memccpy() devuelve un puntero al siguiente carácter de dest tras
**< c,
** o NULL si c no estaba en los n primeros caracteres de orig.
**
** http://manpages.ubuntu.com/manpages/bionic/es/man3/memccpy.3.html
*/

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*dst1;
	const unsigned char	*src1;

	dst1 = dst;
	src1 = src;
	i = 0;

	while (i < n)
	{
		dst1[i] = src1[i];
		if (src1[i] == (unsigned char)c)
		{
			i++;
			return (&dst1[i]);
		}
		i++;
	}
	return (NULL);
}
