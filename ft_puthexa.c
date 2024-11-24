/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:10:06 by hakader           #+#    #+#             */
/*   Updated: 2024/11/24 14:24:13 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int hexalen(unsigned int nb, char *base)
{
    int i;

    i = 0;
    if (nb >= 0 && nb <= 9)
        return (1);
    while (base[i])
    {
        i++;
        base[nb] = base[nb] / 16;
    }
    return (i);
}

int ft_puthexa(unsigned int nb, char *base)
{
    int i;

    i = 0;
    if (nb == 0)
        return (1);
    if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + 48);
        return (1);
    }
    else
    {
        ft_puthexa(nb / 16, base);
        ft_puthexa(nb % 16, base);
    }
    return (hexalen(nb, base));
}