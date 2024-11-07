/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptf_decfunc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:09:34 by andcarva          #+#    #+#             */
/*   Updated: 2024/11/07 16:39:19 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_putnbrtf(int nbr)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(nbr);
	len = ft_putstrtf(num);
	free (num);
	return (len);
}

int	ft_ulength(unsigned int n)
{
	unsigned int	len;

	len = 0;
	if (n == 0)
		n++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_unitoa(unsigned int n)
{
	unsigned int	len;
	char			*str;

	len = ft_ulength(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

int	ft_putunnbr(unsigned int n)
{
	int		len;
	char	*num;

	len = 0;
	if (n == 0)
		len = ft_putchartf('0');
	if (n != 0)
	{
		num = ft_unitoa(n);
		len = ft_putstrtf(num);
		free(num);
	}
	return (len);
}
