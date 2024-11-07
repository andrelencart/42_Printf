/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:10:31 by andcarva          #+#    #+#             */
/*   Updated: 2024/11/07 16:32:55 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

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
			print += ft_printf_rules(str[i], &arg);
		else
			print += ft_putchartf(str[i]);
		i++;
	}
	va_end(arg);
	return (print);
}

int	ft_printf_rules(const char spec, va_list *list)
{
	int	print;

	print = 0;
	if (spec == 'c')
		print += ft_putchartf(va_arg(*list, int));
	else if (spec == 's')
		print = ft_putstrtf(va_arg(*list, char *));
	else if (spec == 'p')
		print = ft_putptr(va_arg(*list, uintptr_t));
	else if (spec == 'd' || spec == 'i')
		print = ft_putnbrtf(va_arg(*list, int));
	else if (spec == 'u')
		print = ft_putunnbr(va_arg(*list, unsigned int));
	else if (spec == 'x')
		print = ft_putnbrbase(va_arg(*list, unsigned int), HEX_LB);
	else if (spec == 'X')
		print = ft_putnbrbase(va_arg(*list, unsigned int), HEX_UPB);
	else if (spec == '%')
		print = ft_percentage(va_arg(*list, int));
	return (print);
}
