/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 23:23:23 by panibal           #+#    #+#             */
/*   Updated: 2026/11/25 20:04:09 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *formats, ...)
{
    va_list	args;
    int		i;

	i = 0;
    va_start(args, formats);
    while (formats[i])
    {
        if (formats[i] == '%')
        {

            if (formats[i + 1] == 'c')
				ft_printchar(va_arg(args, int));
			else if (formats[i + 1] == 's')
				ft_printstr(va_arg(args, char *));
			else if (formats[i + 1] == 'd' || formats[i + 1] == 'i')
				ft_printnbr(va_arg(args, int));
			else if (formats[i + 1] == 'u')
				ft_printnbrunsigned(va_arg(args, unsigned int));
			else if (formats[i + 1] == '%')
				ft_printchar('%');
	//		else if (formats[i + 1] == 'x' || formats[i + 1] == 'X')
				//hexafunction 
			//else if (formats[i + 1] == 'p')
				//pointer function 
			i++;
		}
		else
			ft_printchar(formats[i]);
		i++;
		}
    va_end(args);
    return (0);
}
