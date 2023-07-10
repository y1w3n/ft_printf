/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decimal_len.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 22:24:53 by yitay             #+#    #+#             */
/*   Updated: 2023/07/09 00:52:56 by yitay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_decimal_len(int n, int *len)
{
	char	*arr;

	arr = ft_itoa(n);
	ft_print_string_len(arr, len);
	free(arr);
}
