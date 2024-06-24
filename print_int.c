/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ghd <hael-ghd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:54:14 by hael-ghd          #+#    #+#             */
/*   Updated: 2023/12/07 12:52:04 by hael-ghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_int(int i, int *count)
{
	long int	n;

	n = i;
	if (n < 0)
	{
		print_char('-', count);
		n *= -1;
	}
	if (n < 10)
		print_char((n + 48), count);
	else if (n > 9)
	{
		print_int((n / 10), count);
		print_int((n % 10), count);
	}
}
