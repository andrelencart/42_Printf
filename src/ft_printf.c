/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:10:31 by andcarva          #+#    #+#             */
/*   Updated: 2024/11/06 13:11:38 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int			i;
	va_list		arg;
	int			print;

	va_start(arg, str);
	i = 0;
	print = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i++] == '%')
			print += ft_printf_rules(str, arg);
		else
			print += ft_putchartf(str[i]);
		i++;
	}
	va_end(arg);
	return (print);
}
