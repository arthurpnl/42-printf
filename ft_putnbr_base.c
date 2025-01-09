/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpenel <arpenel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 12:03:39 by arpenel           #+#    #+#             */
/*   Updated: 2025/01/09 14:41:39 by arpenel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned int nbr, char *base, size_t *count)
{
	long	nb;
	long	len_base;

	nb = nbr;
	len_base = ft_strlen(base);
	if (nb == 0)
	{
		ft_putchar(base[0], count);
		return ;
	}
	if (nb > 0 && nb < len_base)
		ft_putchar(base[nb], count);
	if (nb >= len_base)
	{
		ft_putnbr_base(nb / len_base, base, count);
		ft_putnbr_base(nb % len_base, base, count);
	}
}
