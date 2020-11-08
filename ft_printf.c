/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 01:02:08 by focampo           #+#    #+#             */
/*   Updated: 2020/11/06 09:38:36 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_initialize_flags(t_flags *flags)
{
	flags->dash = 0;
	flags->zero = 0;
	flags->zero_per = 0;
	flags->width = 0;
	flags->dot = 0;
	flags->precision = 0;
	flags->negative = 0;
}

static void	specifiers(const char *format, va_list ap, t_flags *flags,
				int *count)
{
	(*count)++;
	ft_verif_flags(format, ap, flags, count);
	if (format[(*count)] == 'c')
		ft_caractere(ap, flags);
	else if (format[(*count)] == 's')
		ft_string(ap, flags);
	else if (format[(*count)] == 'd' || format[(*count)] == 'i')
		ft_print_d_i(ap, flags);
	else if (format[(*count)] == 'u')
		ft_print_u(ap, flags);
	else if (format[(*count)] == 'p')
		ft_pointer(ap, flags);
	else if (format[(*count)] == 'x')
		ft_print_x(ap, flags);
	else if (format[(*count)] == 'X')
		ft_print_hex_x(ap, flags);
	else if (format[(*count)] == '%')
		ft_percent(flags);
	else
	{
		write(1, "%", 1);
		flags->ret++;
		(*count)--;
	}
	ft_initialize_flags(flags);
}

int			ft_printf(const char *format, ...)
{
	va_list	ap;
	t_flags	flags;
	int		count;

	count = 0;
	flags.ret = 0;
	ft_initialize_flags(&flags);
	va_start(ap, format);
	while (format[count])
	{
		if (format[count] == '%')
			specifiers(format, ap, &flags, &count);
		else
		{
			ft_putchar_fd(format[count], 1);
			flags.ret++;
		}
		count++;
	}
	va_end(ap);
	return (flags.ret);
}
