/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string_len.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 22:04:33 by yitay             #+#    #+#             */
/*   Updated: 2023/07/09 00:56:18 by yitay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_string_len(char *s, int *len)
{
	if (s == NULL)
	{
		ft_putstr_fd("(null)", 1);
		(*len) = (*len) + 6;
	}
	else
	{
		ft_putstr_fd(s, 1);
		(*len) = (*len) + ft_strlen(s);
	}
}
