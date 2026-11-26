/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 19:49:11 by panibal           #+#    #+#             */
/*   Updated: 2026/11/25 13:18:43 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int ft_printchar(char c);
int ft_printstr(char *s);
int ft_printnbr(int n);
int ft_printnbrunsigned(unsigned int n);
int ft_printf(const char *format, ...);
    
#endif