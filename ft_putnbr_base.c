/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpenel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 12:03:39 by arpenel           #+#    #+#             */
/*   Updated: 2025/01/06 12:03:41 by arpenel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_putnbr_base(int  nbr, char *base)
{
    long    nb;
    long    size;

    nb = nbr;
    size = ft_strlen(base);
    if(!ft_is_valid_base(base))
        return 0; 
    if(nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
    }
    if(nb > 0 && nb < size)
        ft_putchar(base[nb]);
    if (nb >= size)
    {
        ft_putnbr_base(nb / size, base);
        ft_putnbr_base(nb % size, base);
    }       
}

int ft_is_valid_base(char *base)
{
    int i;
    int j;

    i = 0; 
    if(!base || ft_strlen(base) < 2)
        return 0; // Invalid base
    while(base[i])
    {
        if(base[i] == '+' || base[i] == '-' || base[i] < 32&& base [i] > 126)
            return (0); // Invalid base
        j = i + 1;
        while (base[j])
        {
            if(base[i] == base[j])
                return (0);
            j++;
        }
    i++;
    }
    return (1);
}