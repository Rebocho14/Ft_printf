/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 19:49:11 by panibal           #+#    #+#             */
/*   Updated: 2026/11/24 21:08:56 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int ft_putchar(char c);
int ft_putstr(char *s);
int ft_putnbr(int n);
int ft_putnbrunsigned(unsigned int n);
int ft_printf(const char *format, ...);
    
#endif