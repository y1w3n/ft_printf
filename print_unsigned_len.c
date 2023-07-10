/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_len.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 23:08:19 by yitay             #+#    #+#             */
/*   Updated: 2023/07/08 23:55:19 by yitay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsigned_len(unsigned int n, int *len)
{
	if (n >= 10)
		ft_print_unsigned_len(n / 10, len);
	ft_print_char_len((n % 10 + '0'), len);
}
