/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_rules.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:34:27 by andcarva          #+#    #+#             */
/*   Updated: 2024/11/05 17:53:35 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "Libft/libft.h"

void	ft_printf_rules(const char *str, va_list list)
{
	int	i;

	i = 0;
	if (str[i + 1] == 'c')
		ft_putchar(va_arg(list, int));
	else if (str[i + 1] == 's')
		ft_putstr(va_arg(list, char *));
	else if (str[i + 1] == 'p')
		ft
			
}
