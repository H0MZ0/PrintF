/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unputnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 11:57:03 by hakader           #+#    #+#             */
/*   Updated: 2024/11/24 14:02:14 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	unbr_len(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 0 && n <= 9)
		return (1);	
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_putunbr(unsigned int n)
{
	if (!n)
		return ;
	if (n >= 0 && n <= 9)
	{
		ft_putchar(n + 48);
	}
	else
	{
		ft_unputnbr(n / 10);
		ft_unputnbr(n % 10);
	}
	return (unbr_len(n));
}
