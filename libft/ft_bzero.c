/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:43:13 by focampo           #+#    #+#             */
/*   Updated: 2020/07/16 11:44:03 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Met a 0(octet contenant '\0') les n premiers octets du bloc pointee par s
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
		*(str++) = '\0';
}
