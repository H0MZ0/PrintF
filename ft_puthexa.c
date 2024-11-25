/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:10:06 by hakader           #+#    #+#             */
/*   Updated: 2024/11/25 11:15:06 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "unistd.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int hexalen(unsigned int nb)
{
	int len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		len++;
		nb /= 16;
	}
	return (len);
}

int ft_puthexa(unsigned int nb, char *base)
{
	if (!base)
		return (0);
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
	return (hexalen(nb));
}
