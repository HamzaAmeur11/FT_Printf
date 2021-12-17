/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:14:45 by hameur            #+#    #+#             */
/*   Updated: 2021/12/17 17:29:49 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_check_arg(char str, va_list ap);
int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putnbr(int nb);
int		ft_putnbr_unsigned(unsigned int x);
int		ft_putstr(char *s);
int		dec_to_hex(unsigned long int x, char arg);

#endif
