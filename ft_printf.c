/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpenel <arpenel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:31:43 by arpenel           #+#    #+#             */
/*   Updated: 2025/01/07 14:18:52 by arpenel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdarg.h>

void	ft_putchar(char c, size_t *count);
void	ft_putnbr_base(int nbr, char *base, size_t *count);
void	ft_putnbr(int n, size_t *count);
void	ft_putstr(char *str, size_t *count);
int		ft_strlen(char *str);

void	ft_check_type(char c, va_list ap, size_t *count)
{
	char	*lower_x;
	char	*upper_x;

	lower_x = "0123456789abcdef";
	upper_x = "0123456789ABCDEF";
	if (c == 'c')
		ft_putchar(va_arg(ap, int), count);
	else if (c == 's')
		ft_putstr(va_arg(ap, char *), count);
	else if (c == 'i' || c == 'd')
		ft_putnbr(va_arg(ap, int), count);
	else if (c == 'u')
		ft_putnbr_base(va_arg(ap, unsigned int), "01234568789", count);
	else if (c == 'x')
		ft_putnbr_base(va_arg(ap, unsigned int), lower_x, count);
	else if (c == 'X')
		ft_putnbr_base(va_arg(ap, unsigned int), upper_x, count);
	else if (c == '%')
		ft_putchar('%', count);
}

char	*ft_print_n_find(const char *str, va_list ap, size_t *count)
{
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_check_type(*str, ap, count);
		}
		else
			ft_putchar(*str, count);
		str++;
	}
	return ((char *)str);
}

int	ft_printf(const char *format, ...)
{
	size_t	count;
	va_list	ap;

	count = 0;
	if (!format)
		return (-1);
	va_start(ap, format);
	ft_print_n_find(format, ap, &count);
	va_end(ap);
	return (count);
}
