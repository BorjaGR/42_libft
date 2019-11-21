/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 20:22:06 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/16 20:22:52 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** convierte en MAYUSCULA cualquier caracter que reciba en minuscula. Si
** el caracter que recibe esta en mayuscula lo deja igual.
*/

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
	{
		return (c - 32);
	}
	return (c);
}
