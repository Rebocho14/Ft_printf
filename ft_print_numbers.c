/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 23:29:59 by panibal           #+#    #+#             */
/*   Updated: 2026/11/26 14:15:19 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printnbr(int n)
{
	long	nb;
	int	count;
	nb = n;

	count = 0;
	if (nb < 0)
	{
		count++;
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar_fd((nb + '0'), 1);
	if (nb >= 10)
	{
		count++;
		ft_printnbr(nb / 10);
		ft_printnbr(nb % 10);
	}
	return (count);
}
int ft_printnbrunsigned(unsigned int n)
{
	long	nb;
	int	count;

	count = 0;
	nb = n;
	if (nb >= 0 && nb <= 9)
		ft_putchar_fd((nb + '0'), 1);
	if (nb >= 10)
	{
		count++;
		ft_printnbr(nb / 10);
		ft_printnbr(nb % 10);
	}
	return (count);
}
// int main()
// {
//     int num = -12345;
//     unsigned int unum = 67890;
//     int count;

//     count = ft_printnbr(num);
//     printf("Printed %d characters for signed number.\n", count);
//     ft_printf("print unsigned number: %u\n", unum);
//     count = ft_printnbrunsigned(unum);
//     printf("Printed %d characters for unsigned number.\n", count);

//     return 0;
// }
