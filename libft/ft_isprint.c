/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:10:50 by focampo           #+#    #+#             */
/*   Updated: 2020/07/16 12:10:53 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Verifie si il s'agit d'un caractere imprimable,
** y compris l'espace
*/

#include "libft.h"

int		ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
