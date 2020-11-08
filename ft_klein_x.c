/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_klein_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:01:05 by focampo           #+#    #+#             */
/*   Updated: 2020/11/05 23:21:22 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_pre_klein_x(t_flags *flags, int *space, int *zero, int *len_x)
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

static void	ft_get_klein_x(t_flags *flags, char *klein_x, int *len_x)
{
	int	space;
	int	zero;
	int	i;

	i = 0;
	ft_pre_klein_x(flags, &space, &zero, len_x);
	flags->ret = flags->ret + space + (*len_x);
	if (!flags->dash)
		while (space-- > 0)
			ft_putchar_fd(' ', 1);
	while (zero-- > 0)
		ft_putchar_fd('0', 1);
	if (*len_x)
		while (klein_x[i])
			ft_putchar_fd(klein_x[i++], 1);
	if (flags->dash)
		while (space-- > 0)
			ft_putchar_fd(' ', 1);
}

void		ft_print_x(va_list ap, t_flags *flags)
{
	char	*klein_x;
	int		len_x;

	klein_x = ft_itoa_hex(va_arg(ap, unsigned int), 16);
	len_x = ft_strlen(klein_x);
	if (klein_x && flags->dot && !flags->precision && klein_x[0] == '0')
		len_x = 0;
	ft_get_klein_x(flags, klein_x, &len_x);
	free(klein_x);
}
