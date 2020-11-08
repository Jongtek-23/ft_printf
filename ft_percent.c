/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:01:15 by focampo           #+#    #+#             */
/*   Updated: 2020/11/06 12:12:19 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_percent_finish(t_flags *flags, int *zero)
{
	int space;

	if (flags->width > 1 && !(*zero))
		space = flags->width - 1;
	else
		space = 0;
	flags->ret = flags->ret + 1 + space + (*zero);
	if (!flags->dash)
		while (space-- > 0)
			ft_putchar_fd(' ', 1);
	if (flags->zero)
		while ((*zero)-- > 0)
			ft_putchar_fd('0', 1);
	ft_putchar_fd('%', 1);
	if (flags->dash)
		while (space-- > 0)
			ft_putchar_fd(' ', 1);
}

void		ft_percent(t_flags *flags)
{
	int	zero;

	if (flags->dash && flags->width > 1)
		zero = 0;
	else if (flags->width > 1 && !flags->zero_per)
		zero = 0;
	else if (flags->width > 1 && flags->dot && flags->zero_per)
	{
		zero = flags->width - 1;
		flags->zero = 1;
	}
	else if (flags->width > 1 && flags->dot && flags->precision > 0 &&
			!flags->zero)
	{
		zero = flags->width - 1;
		flags->zero = 1;
	}
	else if (flags->width > 1 && flags->zero)
		zero = flags->width - 1;
	else
		zero = 0;
	ft_percent_finish(flags, &zero);
}
