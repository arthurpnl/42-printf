/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpenel <arpenel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:51:59 by arpenel           #+#    #+#             */
/*   Updated: 2025/01/07 14:04:04 by arpenel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <string.h> 
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stddef.h>
# include <stdarg.h>

int		ft_strlen(char *str);
void	ft_putchar(char c, size_t *count);
int		ft_printf(const char *format, ...);
void	ft_putstr(char *str, size_t *count);
void	ft_putnbr(int n, size_t *count);
void	ft_putnbr_base(int nbr, char *base, size_t *count);

#endif