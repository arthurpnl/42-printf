/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpenel <arpenel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:30:25 by arpenel           #+#    #+#             */
/*   Updated: 2025/01/07 14:11:48 by arpenel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, size_t *count)
{
	long	nb;

	nb = n;
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb, count);
	if (nb < 0)
	{
		ft_putchar('-', count);
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10, count);
	ft_putchar((nb % 10) + 48, count);
}
