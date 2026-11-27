/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 21:39:44 by panibal           #+#    #+#             */
/*   Updated: 2026/11/27 12:18:52 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned long nb, char upper)
{
	char			*base;
	char			*base2;
	unsigned int	i;

	base = "0123456789abcdef";
	base2 = "0123456789ABCDEF";
	i = 0;
	if (nb >= 16)
	{
		i += ft_print_hexa((nb / 16), upper);
		i += ft_print_hexa((nb % 16), upper);
	}
	else
	{
		if (upper == 'X')
			i += ft_printchar(base2[nb]);
		else
			i += ft_printchar(base[nb]);
	}
	return (i);
}

int	ft_print_ptr(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_printstr("(nil)"));
	count += ft_printstr("0x");
	count += ft_print_hexa((unsigned long)ptr, 0);
	return (count);
}

// int main()
// {
// 	int d = 10;
// 	int *ptr = &d;
// 	char *str;
// 	printf("%p\n", str);
// 	//ft_printf("%x", d);
// 	ft_printf("%p", str);
// 	printf("\n");
// 	ft_print_ptr((char *) str);
// 	printf("\n");
// 	printf("original %p\n", ptr);
// 	ft_printf("meu %p", ptr);
// 	printf("\n");
// 	ft_print_ptr((char *) ptr);
// }