/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 00:27:11 by yitay             #+#    #+#             */
/*   Updated: 2023/07/09 00:59:18 by yitay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *s, ...);
void	ft_print_char_len(char c, int *len);
void	ft_print_decimal_len(int n, int *len);
void	ft_print_string_len(char *s, int *len);
void	ft_print_pointer_len(uintptr_t n, int *len);
void	ft_print_hexalow_len(unsigned int n, int *len);
void	ft_print_hexaup_len(unsigned int n, int *len);
void	ft_print_unsigned_len(unsigned int n, int *len);

#endif