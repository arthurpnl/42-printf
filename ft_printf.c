/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpenel <arpenel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:31:43 by arpenel           #+#    #+#             */
/*   Updated: 2025/01/07 12:59:18 by arpenel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

void	ft_check_type(char c, va_list ap, size_t count)
{
	char	*lower_x;
	char	*upper_x;

	x = "0123456789abcdef";
	X = "0123456789ABCDEF";
	if (c == 'c')
		ft_putchar(va_arg(ap, int));
	else if (c == 's')
		ft_pustr(va_arg(ap, char *));
	else if (c == 'i' || c == 'd')
		ft_putnbr(va_arg(ap, int));
	else if (c == 'u')
		ft_putnbr_base(va_arg(ap, unsigned int), "01234568789");
	else if (c == 'x')
		ft_putnbr_base(va_arg(ap, unsigned int), lower_x, 16);
	else if (c == 'X')
		ft_putnbr_base(va_arg(ap, unsigned int), upper_x, 16);
	else if (c == '%')
		ft_putchar('%');
}

char	*ft_print_n_find(const char *str, va_list ap, size_t count)
{
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_check_type(*str, ap);
		}
		else
			ft_putchar(*str, &count);
		str++;
	}
}

int	ft_printf(const char *format, ...)
{
	size_t	count;
	va_list	ap;

	count = 0;
	va_start(ap, format);
	ft_print_n_find(format, ap, count);
	va_end(ap);
	return (count);
}
