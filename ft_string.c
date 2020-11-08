/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 01:02:27 by focampo           #+#    #+#             */
/*   Updated: 2020/11/01 01:01:04 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_get_string(t_flags *flags, char *str, int *len)
{
	int	space;
	int	zero;

	if (flags->width > (*len) && flags->zero)
		zero = flags->width - (*len);
	else
		zero = 0;
	if (flags->width > (*len) && !zero)
		space = flags->width - (*len);
	else
		space = 0;
	flags->ret = flags->ret + (*len) + space + zero;
	if (!flags->dash)
		while (space-- > 0)
			ft_putchar_fd(' ', 1);
	if (flags->zero)
		while (zero-- > 0)
			ft_putchar_fd('0', 1);
	while ((*len)--)
		ft_putchar_fd(*str++, 1);
	if (flags->dash)
		while (space-- > 0)
			ft_putchar_fd(' ', 1);
}

void		ft_string(va_list ap, t_flags *flags)
{
	char	*str;
	char	*str_null;
	int		len;

	str_null = "(null)";
	if (!(str = va_arg(ap, char *)))
		str = str_null;
	len = ft_strlen(str);
	if (flags->precision < len && flags->precision > 0)
		len = flags->precision;
	else if (flags->dot && !flags->precision)
		len = 0;
	else
		len = ft_strlen(str);
	ft_get_string(flags, str, &len);
}
