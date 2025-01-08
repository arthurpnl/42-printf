/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpenel <arpenel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:20:42 by arpenel           #+#    #+#             */
/*   Updated: 2025/01/07 13:23:10 by arpenel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str, size_t *count)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i], count);
		i++;
	}
}
