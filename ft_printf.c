/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 23:23:23 by panibal           #+#    #+#             */
/*   Updated: 2026/11/27 10:59:06 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(char s, va_list *list)
{
	int	i;

	i = 0;
	if (s == 'c')
		i += ft_printchar(va_arg(*list, int));
	else if (s == 's')
		i += ft_printstr(va_arg(*list, char *));
	else if (s == 'd' || s == 'i')
		i += ft_printnbr(va_arg(*list, int));
	else if (s == 'u')
		i += ft_printnbrunsigned(va_arg(*list, unsigned int));
	else if (s == '%')
		i += ft_printchar('%');
	else if (s == 'x' || s == 'X')
		i += ft_print_hexa(va_arg(*list, unsigned int), s);
	else if (s == 'p')
		i += ft_print_ptr(va_arg(*list, void *));
	else
	{
		i += ft_printchar('%');
		i += ft_printchar(s);
	}
	return (i);
}

int	ft_printf(const char *formats, ...)
{
	va_list	list;
	int		i;
	int		count;

	va_start(list, formats);
	i = 0;
	count = 0;
	if (!formats)
		return (-1);
	while (formats[i] != '\0')
	{
		if (formats[i] == '%' && formats[i + 1] != '\0')
		{
			i++;
			count += ft_formats(formats[i], &list);
		}
		else if (formats[i] == '%' && formats[i + 1] == '\0')
			return (-1);
		else
			count += write (1, &formats[i], 1);
		i++;
	}
	va_end(list);
	return (count);
}
// int main()
// {
//  ft_printf("testando %c, %s, %d, %i, %u, %x, %X, %p,
// %%\n", 'A', "Hello", -101, 42, 42, 255, 255, NULL);
//  int temp = ft_printf("%i", -101);
//  printf("ft_printf returned: %d\n", temp);
// }
