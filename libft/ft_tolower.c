/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 20:15:39 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/16 20:15:59 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** convierte en minuscula cualquier caracter que reciba en MAYUSCULA. Si
** el caracter que recibe esta en minuscula lo deja igual.
*/

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
	{
		return (c + 32);
	}
	return (c);
}
