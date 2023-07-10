/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexalow_len.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 22:47:35 by yitay             #+#    #+#             */
/*   Updated: 2023/07/09 00:52:47 by yitay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hexalow_len(unsigned int n, int *len)
{
	char	*tmp;
	int		rem;

	tmp = "0123456789abcdef";
	if (n > 0)
	{
		rem = n % 16;
		n = n / 16;
		ft_print_hexalow_len(n, len);
		write(1, &tmp[rem], 1);
		(*len)++;
	}
}
