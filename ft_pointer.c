/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:01:24 by focampo           #+#    #+#             */
/*   Updated: 2020/11/01 00:45:33 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_pre_space(t_flags *flags, int *space, int *len_pointer,
			char *pointer)
{
	if (pointer && flags->width > (*len_pointer))
		(*space) = flags->width - (*len_pointer);
	else
		(*space) = 0;
}

static void	ft_pre_zero(t_flags *flags, int *zero, int *len_pointer,
			char *pointer)
{
	if (pointer && flags->precision > (*len_pointer))
		(*zero) = flags->precision - (*len_pointer);
	else
		(*zero) = 0;
	if (pointer && flags->dot && !flags->precision && *pointer == '0')
		(*len_pointer) = 2;
	else
		(*len_pointer) = (*len_pointer) + 2;
}

static void	ft_get_pointer(t_flags *flags, char *pointer)
{
	int	len_pointer;
	int	space;
	int	zero;
	int	i;

	i = 0;
	len_pointer = ft_strlen(pointer);
	ft_pre_zero(flags, &zero, &len_pointer, pointer);
	ft_pre_space(flags, &space, &len_pointer, pointer);
	flags->ret = flags->ret + len_pointer + space + zero;
	if (!flags->dash)
		while (space-- > 0)
			ft_putchar_fd(' ', 1);
	write(1, "0x", 2);
	while (zero-- > 0)
		ft_putchar_fd('0', 1);
	if (len_pointer > 2)
		while (pointer[i])
			ft_putchar_fd(pointer[i++], 1);
	if (flags->dash)
		while (space-- > 0)
			ft_putchar_fd(' ', 1);
}

void		ft_pointer(va_list ap, t_flags *flags)
{
	char	*pointer;

	pointer = ft_itoa_pointer(va_arg(ap, unsigned long int), 16);
	ft_get_pointer(flags, pointer);
	free(pointer);
}
