/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:40:48 by yitay             #+#    #+#             */
/*   Updated: 2023/07/08 21:35:30 by yitay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char_len(char c, int *len)
{
	ft_putchar_fd(c, 1);
	(*len)++;
}

// int main()
// {
//     int len = 0;
//     char c = 'A';

//     print_char_len(c, &len);

//     printf("Length: %d\n", len);

//     return 0;
// }
