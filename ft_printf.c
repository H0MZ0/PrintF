/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:44:31 by hakader           #+#    #+#             */
/*   Updated: 2024/11/24 10:41:15 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_printf(const char *type, ...)
{
	int	i;
	int	x;
	va_list	arg;

	va_arg(type, arg);
	i = 0;
	x = 0;
	while (type[i])
	{
		if (type[i] == '%')
		{
			i++;
			ft_check();
		}
	}
}