/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:48:56 by andcarva          #+#    #+#             */
/*   Updated: 2024/11/06 18:38:58 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdint.h>

int		ft_printf(const char *, ...);
int		ft_printf_rules(const char *str, va_list list);
int		ft_putchartf(int c);
void	ft_putstr(char *str);
int		ft_putstrtf(char *str);
int		ft_putnbrtf(int nbr);
int		ft_ulength(unsigned int n);
char	*ft_unitoa(unsigned int n);
int		ft_putunnbr(unsigned int n);
int		ft_percentage(int c);

#endif // FT_PRINTF_H