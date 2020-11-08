/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:12:10 by focampo           #+#    #+#             */
/*   Updated: 2020/07/16 12:12:12 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Convertit la lettre 'c' en minuscule si c'est possible -> unsigned char
*/

#include "libft.h"

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
