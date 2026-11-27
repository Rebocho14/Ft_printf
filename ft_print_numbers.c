/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 23:29:59 by panibal           #+#    #+#             */
/*   Updated: 2026/11/27 12:19:04 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	long	num;
	int		count;
	char	c;

	count = 0;
	num = n;
	if (num < 0)
	{
		count++;
		ft_printchar('-');
		num = -num;
	}
	if (num >= 10)
		count += ft_printnbr((num / 10));
	c = (num % 10) + '0';
	write(1, &c, 1);
	count++;
	return (count);
}

int	ft_printnbrunsigned(unsigned int n)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 10)
		count += ft_printnbrunsigned((n / 10));
	c = (n % 10) + '0';
	write(1, &c, 1);
	count++;
	return (count);
}
