/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:24:39 by hameur            #+#    #+#             */
/*   Updated: 2021/12/17 17:26:46 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int		i;
	long	x;

	x = nb;
	i = 0;
	if (x < 0)
	{
		ft_putchar('-');
		x = -x;
		i++;
	}
	if (x < 10)
		i += ft_putchar(x + '0');
	else
	{
		i += ft_putnbr(x / 10);
		i += ft_putnbr(x % 10);
	}
	return (i);
}

int	ft_putnbr_unsigned(unsigned int nb)
{
	int				i;
	unsigned long	x;

	x = nb;
	i = 0;
	if (x >= 10)
	{
		i += ft_putnbr_unsigned(x / 10);
		i += ft_putnbr_unsigned(x % 10);
	}
	else
		i += ft_putchar(x + '0');
	return (i);
}

int	dec_to_hex(unsigned long int x, char arg)
{
	int	i;

	i = 0;
	if (x > 15)
	{
		i += dec_to_hex(x / 16, arg);
		i += dec_to_hex(x % 16, arg);
	}
	else if (x < 16)
	{
		if (x < 10)
			i += ft_putchar(x + 48);
		else if (x > 9 && (arg == 'x' || arg == 'p'))
			i += ft_putchar(x + 87);
		else if (x > 9 && arg == 'X')
			i += ft_putchar(x + 55);
	}
	return (i);
}
