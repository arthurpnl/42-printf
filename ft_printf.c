/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpenel <arpenel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:31:43 by arpenel           #+#    #+#             */
/*   Updated: 2024/12/20 16:29:07 by arpenel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

void	ft_check_type(char c, va_list ap, size_t count) // Function to check the type specifier
{
	char *lower_x;
	char *upper_X;

	x = "0123456789abcdef";
	X = "0123456789ABCDEF";

	if(c == 'c') // Single caracter
		ft_putchar(va_arg(ap, int));
	else if(c == 's') // String 
		ft_pustr(va_arg(ap, char *));
	else if(c == 'i' || c == 'd') // Decimal signed integer
		ft_putnbr(va_arg(ap, int));
	else if(c = 'u') // Unsigned integer 
		ft_putnbr_base(va_arg(ap, unsigned int), "01234568789"); 
	else if(c == 'x') // Lower Hex Integer 
		ft_putnbr_base(va_arg(ap, unsigned int), lower_x, 16);
	else if(c == 'X') // Upper Hex Integer 
		ft_putnbr_base(va_arg(ap, unsigned int), upper_x, 16);
	else if(c == '%') // Percent
		ft_putchar('%');
}

char	*ft_print_n_find(const char *str, va_list ap, size_t count) // Function to find the '%' and print caracter before
{
	while(*str)
	{
		if(*str == '%')
		{
			str++;
			ft_check_type(*str, ap);
		}
		else
			ft_putchar(*str);
		str++;
	}
}|

int	ft_printf(const char *format, ...)
{
	size_t count;

	count = 0;
	va_list ap;
	va_start(ap, format);
	ft_print_n_find(format, ap, count);
	va_end(ap);
	return (count);
}
