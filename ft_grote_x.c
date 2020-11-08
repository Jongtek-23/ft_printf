/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grote_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:00:51 by focampo           #+#    #+#             */
/*   Updated: 2020/11/05 23:23:56 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_pre_grote_x(t_flags *flags, int *space, int *zero, int *len_x)
{
	if (flags->precision > (*len_x))
		(*zero) = flags->precision - (*len_x);
	else if (flags->width > (*len_x) && flags->dot && !flags->precision)
		flags->zero = 0;
	else if (flags->width > (*len_x) && flags->zero)
		(*zero) = flags->width - (*len_x);
	else
		(*zero) = 0;
	if ((*zero) > 0)
		(*len_x) = (*len_x) + (*zero);
	if (flags->width > (*len_x) && !flags->zero)
		(*space) = flags->width - (*len_x);
	else
		(*space) = 0;
}

static void	ft_get_grote_x(t_flags *flags, char *grote_x, int *len_x)
{
	int	space;
	int	zero;
	int	i;

	i = 0;
	ft_pre_grote_x(flags, &space, &zero, len_x);
	flags->ret = flags->ret + space + (*len_x);
	if (!flags->dash)
		while (space-- > 0)
			ft_putchar_fd(' ', 1);
	while (zero-- > 0)
		ft_putchar_fd('0', 1);
	if (*len_x)
		while (grote_x[i])
		{
			grote_x[i] = ft_toupper(grote_x[i]);
			ft_putchar_fd(grote_x[i++], 1);
		}
	if (flags->dash)
		while (space-- > 0)
			ft_putchar_fd(' ', 1);
}

void		ft_print_hex_x(va_list ap, t_flags *flags)
{
	char	*grote_x;
	int		len_x;

	grote_x = ft_itoa_hex(va_arg(ap, unsigned int), 16);
	len_x = ft_strlen(grote_x);
	if (grote_x && flags->dot && !flags->precision && grote_x[0] == '0')
		len_x = 0;
	ft_get_grote_x(flags, grote_x, &len_x);
	free(grote_x);
}
