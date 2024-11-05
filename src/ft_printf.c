/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:53:11 by andcarva          #+#    #+#             */
/*   Updated: 2024/11/05 17:48:29 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list arg;
	int		print;
	

	va_start(arg, str);
	i = 0;
	print = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
			print = ft_printf_rules(str, arg);
		else
			print = ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (print);
}
