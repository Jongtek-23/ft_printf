/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 01:02:17 by focampo           #+#    #+#             */
/*   Updated: 2020/11/06 09:37:58 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_flags
{
	int	dash;
	int	zero;
	int zero_per;
	int	width;
	int	dot;
	int	precision;
	int	negative;
	int ret;
}				t_flags;

int				ft_printf(const char *format, ...);
void			ft_verif_flags(const char *format, va_list ap,
				t_flags *flags, int *count);
void			ft_caractere(va_list ap, t_flags *flags);
void			ft_string(va_list ap, t_flags *flags);
void			ft_print_d_i(va_list ap, t_flags *flags);
void			ft_print_u(va_list ap, t_flags *flags);
void			ft_pointer(va_list ap, t_flags *flags);
void			ft_print_x(va_list ap, t_flags *flags);
void			ft_print_hex_x(va_list ap, t_flags *flags);
void			ft_percent(t_flags *flags);

#endif
