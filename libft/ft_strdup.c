/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:11:49 by focampo           #+#    #+#             */
/*   Updated: 2020/07/17 15:27:07 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Renvoie un pointeur sur une nouvelle chaine de caracteres qui est
** dupliquee depuis s.La memoire occupee par cette nouvelle chaine est
** obtenu en appelant malloc.
** Renvoie un pointeur sur la chaine dupliquee, ou null s'il n'y a pas assez
** de memoire.
** (i + 1) => ici le 1 represente le '\0'
*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i])
		i++;
	if (!(str = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
**include <stdio.h>
**
**int		main()
**{
**	char str[50] = "Hello tout Le Monde";
**	printf("%s\n", ft_strdup(str));
**	return 0;
**}
*/
