/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptf_hexfunc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:55:45 by andcarva          #+#    #+#             */
/*   Updated: 2024/11/06 19:16:43 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_putnbrbase(unsigned int nbr, char *base)
{
	int	result;
	int	len;

	len = ft_strlen(base);
	if (nbr >= 10)
	{
		ft_putnbrbase(nbr / len, base);
		ft_putnbrbase(nbr % len, base);
	}
	else
	{
		result = nbr + '0';
		write(1, &result, 1);
	}
	return (result);
}

int	ft_putptr()
{
	
}