/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ghd <hael-ghd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:54:10 by hael-ghd          #+#    #+#             */
/*   Updated: 2023/12/06 11:42:32 by hael-ghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	recurs(unsigned int p, char *base, int *count)
{
	if (p >= 16)
		recurs((p / 16), base, count);
	print_char(base[p % 16], count);
}

void	print_hex(unsigned int i, int *count, char c)
{
	char	*base;

	if (c == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (i < 16)
		print_char(base[i], count);
	else
		recurs(i, base, count);
}
