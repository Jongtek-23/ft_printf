/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:11:27 by focampo           #+#    #+#             */
/*   Updated: 2020/07/17 12:43:13 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copie n octets depuis la zone memoire src vers la zone memoire dst.
** Renvoie un pointeur sur dst.
*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *source;
	char *destination;

	source = (char *)src;
	destination = (char *)dst;
	if ((!dst && !src) || !n)
		return (dst);
	while (n--)
		*destination++ = *source++;
	return (dst);
}
