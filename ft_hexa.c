/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 21:39:44 by panibal           #+#    #+#             */
/*   Updated: 2026/11/25 20:50:18 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int	ft_print_hexa(unsigned int nb)
{
	char			*base;
	unsigned int	i;

	base = "0123456789abcdef";
	i = 0;
	if (nb >= 16)
	{
		i += ft_print_hexa((nb / 16));
		i += ft_print_hexa((nb % 16));
	}
	else
	{
			i += ft_printchar(base[nb]);
	}
	return (i);
}
// int	ft_print_ptr(void *ptr)
// {
// 	return()
// }
int main()
{
	unsigned int num = 10;
	int res = 0;
	int *ptr = NULL;

	res = ft_print_hexa(num);
	printf("%d\n%p", res, &ptr);

	return 0;
}