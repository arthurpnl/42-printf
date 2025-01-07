/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpenel <arpenel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 12:03:39 by arpenel           #+#    #+#             */
/*   Updated: 2025/01/07 14:11:43 by arpenel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base, size_t *count)
{
	long	nb;
	long	size;

	nb = nbr;
	size = ft_strlen(base);
	if (nb == 0)
		ft_putchar('0', &count);
	if (nb < 0)
	{
		ft_putchar('-', &count);
		nb *= -1;
	}
	if (nb > 0 && nb < size)
		ft_putchar(base[nb], &count);
	if (nb >= size)
	{
		ft_putnbr_base(nb / size, base, &count);
		ft_putnbr_base(nb % size, base, &count);
	}
}
