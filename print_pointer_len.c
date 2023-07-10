/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer_len.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 22:24:13 by yitay             #+#    #+#             */
/*   Updated: 2023/07/09 00:53:30 by yitay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_pointer_len(uintptr_t n, int *len)
{
	char	*tmp;
	int		rem;

	tmp = "0123456789abcdef";
	if (n > 0)
	{
		rem = n % 16;
		n = n / 16;
		ft_print_pointer_len(n, len);
		write(1, &tmp[rem], 1);
		(*len)++;
	}
}
