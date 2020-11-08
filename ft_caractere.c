/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_caractere.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 01:01:18 by focampo           #+#    #+#             */
/*   Updated: 2020/10/31 01:01:21 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_caractere(va_list ap, t_flags *flags)
{
	char	c;
	int		space;
	int		zero;

	c = va_arg(ap, int);
	if (flags->width > 1 && !flags->zero)
		space = flags->width - 1;
	else
		space = 0;
	if (flags->zero && flags->width > 1)
		zero = flags->width - 1;
	else
		zero = 0;
	flags->ret = flags->ret + 1 + space + zero;
	if (!flags->dash)
		while (space-- > 0)
			ft_putchar_fd(' ', 1);
	if (flags->zero)
		while (zero-- > 0)
			ft_putchar_fd('0', 1);
	ft_putchar_fd(c, 1);
	if (flags->dash)
		while (space-- > 0)
			ft_putchar_fd(' ', 1);
}
