/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexaup_len.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 22:51:55 by yitay             #+#    #+#             */
/*   Updated: 2023/07/09 00:56:03 by yitay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hexaup_len(unsigned int n, int *len)
{
	char	*tmp;
	int		rem;

	tmp = "0123456789ABCDEF";
	if (n > 0)
	{
		rem = n % 16;
		n = n / 16;
		ft_print_hexaup_len(n, len);
		write(1, &tmp[rem], 1);
		(*len)++;
	}
}
