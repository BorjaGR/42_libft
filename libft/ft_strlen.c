/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 20:35:49 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/16 20:36:58 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Calcula el número de caracteres de la cadena apuntada por str.
** La función devuelve el número de caracteres hasta el carácter nulo, que no se
** incluye.
*/

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
