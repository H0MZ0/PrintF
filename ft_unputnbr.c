/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unputnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 11:57:03 by hakader           #+#    #+#             */
/*   Updated: 2024/11/24 12:32:14 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void    ft_unputnbr(unsigned int n)
{
    if (!n)
		return;
	if (n >= 0 && n <= 9)
	{
		ft_putchar(n + 48);
	}
	else
	{
		ft_unputnbr(n / 10);
		ft_unputnbr(n % 10);
	}
}

int main()
{
    unsigned int i = 4294967295;
    ft_unputnbr(i);
}