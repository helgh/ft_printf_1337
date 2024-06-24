/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ghd <hael-ghd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:27:10 by hael-ghd          #+#    #+#             */
/*   Updated: 2023/12/06 11:41:23 by hael-ghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	print_char(char c, int *count);
void	print_str(char *s, int *count);
void	print_adress(void *ptr, int *count);
void	print_hex(unsigned int i, int *count, char c);
void	print_int(int i, int *count);
void	print_uint(unsigned int i, int *count);
#endif	