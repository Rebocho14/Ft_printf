/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchars.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 19:45:08 by panibal           #+#    #+#             */
/*   Updated: 2026/11/27 11:04:23 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_printstr(char *s)
{
	int	i;

	if (!s)
		return (write(1, "(null)", 6));
	i = 0;
	while (s[i])
	{
		ft_printchar(s[i]);
		i++;
	}
	return (i);
}
// int main()
// {
//     char c = 'U';
//     char *str = "UGA BUGA";
//     int count;

//     count = ft_putchar(c);
//     count = ft_putchar(c);
//     printf("%d\n", count);

//     count = ft_putstr(str);
//     printf(" %d\n", count);
// }