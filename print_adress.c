/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_adress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ghd <hael-ghd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:48:20 by hael-ghd          #+#    #+#             */
/*   Updated: 2023/12/07 12:49:23 by hael-ghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	recurs(unsigned long p, char *base, int *count)
{
	if (p >= 16)
		recurs((p / 16), base, count);
	print_char(base[p % 16], count);
}

void	print_adress(void *ptr, int *count)
{
	unsigned long	i;
	char			*base;

	base = "0123456789abcdef";
	i = (unsigned long) ptr;
	print_str("0x", count);
	if (i < 16)
		print_char(base[i], count);
	else
		recurs(i, base, count);
}
