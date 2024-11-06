/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_rules.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:08:36 by andcarva          #+#    #+#             */
/*   Updated: 2024/11/06 18:56:42 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_rules(char spec, va_list list)
{
	int	printed;

	printed = 0;
	if (spec == 'c')
		printed = ft_putchartf(va_arg(list, int));
	else if (spec == 's')
		printed = ft_putstrtf(va_arg(list, char *));
	else if (spec == 'p')
		printed = 
	else if (spec == 'd' || spec == 'i')
		printed = ft_putnbrtf(va_arg(list, int));
	else if (spec == 'u')
		printed = ft_putunnbr(va_arg(list, unsigned int));
	else if (spec == 'x')
		printed = 
	else if (spec == 'X')
		printed = 
	else if (spec == '%')
		printed = ft_percentage(va_arg(list, int));
	return (printed);
}
