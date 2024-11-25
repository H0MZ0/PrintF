/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:44:31 by hakader           #+#    #+#             */
/*   Updated: 2024/11/25 10:42:17 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_printf(const char *type, ...)
{
	int	i;
	va_list	arg;

	va_start(arg, type);
	i = 0;
	while (type[i])
	{
		if (type[i] == '%')
		{
			i++;
			ft_check();
		}
	}
}