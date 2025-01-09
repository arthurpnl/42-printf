/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpenel <arpenel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:30:25 by arpenel           #+#    #+#             */
/*   Updated: 2025/01/09 13:34:34 by arpenel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, size_t *count)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-', count);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10, count);
	ft_putchar((nb % 10) + '0', count);
}
