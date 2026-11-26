/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 23:29:59 by panibal           #+#    #+#             */
/*   Updated: 2026/11/25 20:10:57 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printnbr(int n)
{
    char *str;
    int count;

    str = ft_itoa(n);
    if (!str)
        return (0);
    count = ft_printstr(str);
    free(str);
    return (count);
}
int ft_printnbrunsigned(unsigned int n)
{
    char *str; 
    unsigned int count;
    str = ft_itoa(n);
    if (!str)
        return (0);
    count = ft_printstr(str);
    free(str);
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
