/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ghd <hael-ghd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:54:19 by hael-ghd          #+#    #+#             */
/*   Updated: 2023/12/09 14:32:05 by hael-ghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_uint(unsigned int i, int *count)
{
	if (i < 10)
		print_char((i + 48), count);
	else
	{
		print_uint((i / 10), count);
		print_uint((i % 10), count);
	}
}
