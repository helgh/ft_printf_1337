/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ghd <hael-ghd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:46:31 by hael-ghd          #+#    #+#             */
/*   Updated: 2023/12/06 14:25:48 by hael-ghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_str(char *s, int *count)
{
	if (s == NULL)
		print_str("(null)", count);
	else
	{
		while (*s != 0)
		{
			write(1, &(*s), 1);
			s++;
			(*count)++;
		}
	}
}
