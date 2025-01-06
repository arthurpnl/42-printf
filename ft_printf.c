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

void	ft_check_type(char c, va_list ap) // Function to check the type specifier
{
	char *x;
	char *X;

	x = "0123456789abcdef";
	X = "0123456789ABCDEF";

	if(c == 'c') // Single caracter
		ft_putchar(va_arg(ap, int));
	if(c == 's') // String 
		ft_pustr(va_arg(ap, char *));
	if(c == 'i' || c == 'd') // Decimal signed integer
		ft_putnbr(va_arg(ap, int));
	if(c = 'u')
		ft_putnbr(va_arg(ap, unsigned int)); // Unsigned integer
	if(c == 'x')
		ft_putnbr_base(va_arg(ap, unsigned int), 16, c);
	if (c == 'X')
		ft_putnbr_base(va_arg(ap, unsigned int), 16, c);
	if(c == '%')
		ft_putchar('%');
}

char	*print_n_find(const char *str, va_list ap) // Function to find the '%' and print caracter before
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
	va_list ap;
	va_star(ap, format);
	ft_print_n_find(format, ap);
	print_n_find(ap, format);
	va_end(ap);
}
