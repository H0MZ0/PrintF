/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:45:26 by hakader           #+#    #+#             */
/*   Updated: 2024/11/24 13:49:20 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

size_t  ft_strlen(const char *s);
void    ft_putstr(char *str);
void    ft_putnbr(int n);
void    ft_putchar(char c);
int     ft_printf(const char *type, ...);

#endif