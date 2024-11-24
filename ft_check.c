/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 10:38:37 by hakader           #+#    #+#             */
/*   Updated: 2024/11/24 14:22:15 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void    ft_check(const char type)
{
    if (type == '%')
    {
        if (type == 'p')
            ft_putchar(type);
        if (type == 's')
            ft_putstr(type);
        if (type == 'p')
            
        if (type == 'd')
            ft_putnbr(type);
        if (type == 'i')
            ft_putnbr(type);
        if (type == 'u')
        if (type == 'x')
            ft_puthexa();
        if (type == 'X')
        if (type == '%')
    }
}