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
	if(c == 'c')
	{
		char car = va_arg(ap, char);
		ft_putchar(c);
	}	
	if(c == 's')
	{
		char *string = va_arg(ap, char *);
		ft_putstr(string);
	}
	if(c == 'i')
	{
		int	i = va_arg(ap, int);
		ft_putchar(i + 48);
	}
}

char	*print_n_find(const char *str) // Function to find the '%' and print caracter before
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

char*print_n_find(const char *str)
{
	va_list ap;
	va_start(ap, *str);

	va_end();
}
