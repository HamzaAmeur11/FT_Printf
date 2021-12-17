/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:13:46 by hameur            #+#    #+#             */
/*   Updated: 2021/12/17 18:42:49 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_arg(char str, va_list ap)
{
	int	i;

	i = 0;
	if (str == 's')
		i = ft_putstr(va_arg(ap, char *));
	else if (str == 'c')
		i = ft_putchar(va_arg(ap, int));
	else if (str == 'p')
	{
		i = ft_putstr((char *)"0x");
		i += dec_to_hex(va_arg(ap, unsigned long int), str);
	}
	else if (str == 'd' || str == 'i')
		i = ft_putnbr(va_arg(ap, int));
	else if (str == 'u')
		i = ft_putnbr_unsigned(va_arg(ap, long));
	else if (str == 'x' || str == 'X')
		i += dec_to_hex(va_arg(ap, unsigned int), str);
	else if (str == '%')
		i = ft_putchar('%');
	else
		return (ft_putchar(str));
	return (i);
}
