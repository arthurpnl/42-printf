/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpenel <arpenel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:31:43 by arpenel           #+#    #+#             */
/*   Updated: 2024/12/17 14:07:30 by arpenel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

char	*print_n_find(const char *str) // Function to find the '%' and print the string
{
	unsigned int	i;

	i = 0;
	while(str[i])
	{
		if(str[i] == '%')
		{
			i++;
			return ((char *)&str[i]);
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}	
	}
}





int	ft_printf(const char *str, ...)
{
	va_list args;
}