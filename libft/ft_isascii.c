/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:10:25 by focampo           #+#    #+#             */
/*   Updated: 2020/07/16 12:10:27 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Verifie si 'c' est un unsigned char sur 7 bits,
** entrant dans le jeu de caracteres ASCII
*/

#include "libft.h"

int		ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
