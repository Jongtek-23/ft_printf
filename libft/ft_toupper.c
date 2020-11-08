/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:12:16 by focampo           #+#    #+#             */
/*   Updated: 2020/07/19 14:55:35 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Convertit la lettre 'c' en majuscule si c'est possible -> unsigned char
*/

#include "libft.h"

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
