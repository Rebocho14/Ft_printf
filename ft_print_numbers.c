/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 23:29:59 by panibal           #+#    #+#             */
/*   Updated: 2026/11/18 23:37:18 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int n)
{
    char *str;
    int count;

    str = ft_itoa(n);
    if (!str)
        return (0);
    count = ft_putstr(str);
    free(str);
    return (count);
}
int ft_putnbrunsigned(unsigned int n)
{
    char *str; 
    unsigned int count;
    str = ft_itoa(n);
    if (!str)
        return (0);
    count = ft_putstr(str);
    free(str);
    return (count);
}
