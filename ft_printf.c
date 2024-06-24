/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ghd <hael-ghd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:35:09 by hael-ghd          #+#    #+#             */
/*   Updated: 2023/12/09 14:16:28 by hael-ghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	printall(char c, int *count, va_list ar)
{
	int	i;

	i = *count;
	if (c == 'c')
		print_char(va_arg(ar, int), count);
	else if (c == 's')
		print_str(va_arg(ar, char *), count);
	else if (c == 'p')
		print_adress(va_arg(ar, void *), count);
	else if (c == 'd' || c == 'i')
		print_int(va_arg(ar, int), count);
	else if (c == 'u')
		print_uint(va_arg(ar, unsigned int), count);
	else if (c == 'X' || c == 'x')
		print_hex(va_arg(ar, unsigned int), count, c);
	else
		print_char(c, count);
	if (i == *count)
		return (1);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ar;
	int		count;
	int		i;
	int		n;

	count = 0;
	if (write(1, 0, 0) < 0)
		return (-1);
	va_start(ar, format);
	while (*format != 0)
	{
		if (*format == '%' && *(format + 1) == 0)
			return (count);
		i = 0;
		n = count;
		if (*format == '%' && *(format + 1) != 0)
			i = printall(*(format++ + 1), &count, ar);
		if (n == count && i != 1)
			print_char(*format, &count);
		format++;
	}
	va_end(ar);
	return (count);
}
