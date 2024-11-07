/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptf_hexfunc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:55:45 by andcarva          #+#    #+#             */
/*   Updated: 2024/11/07 16:38:57 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_putnbrbase(unsigned int nbr, char *base)
{
	int		result;
	int		len;
	char	c;

	result = 0;
	len = ft_strlen(base);
	if (nbr >= 10)
	{
		result = ft_putnbrbase(nbr / len, base);
		result = ft_putnbrbase(nbr % len, base);
	}
	else
	{
		c = base[nbr];
		result += write(1, &c, 1);
	}
	return (result);
}

int	ft_putnbrptr(uintptr_t nbr, char *base)
{
	int		result;
	int		len;
	char	c;

	result = 0;
	len = ft_strlen(base);
	if (nbr >= 10)
	{
		result = ft_putnbrptr(nbr / len, base);
		result = ft_putnbrptr(nbr % len, base);
	}
	else
	{
		c = base[nbr];
		result += write(1, &c, 1);
	}
	return (result);
}

int	ft_putptr(uintptr_t ptr)
{
	int	print;

	print = 0;
	if (!ptr)
		print = ft_putstrtf("(null)");
	else
	{
		print += write(1, "0x", 2);
		print += ft_putnbrptr(ptr, HEX_LB);
	}
	return (print);
}
