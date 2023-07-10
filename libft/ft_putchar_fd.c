/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:02:37 by yitay             #+#    #+#             */
/*   Updated: 2023/05/28 17:00:03 by yitay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}

// int main(void)
// {
//     char c = 'A'; // Example character to write to file descriptor

//     int fd = 1; // File descriptor 1 represents standard output (stdout)

//     ft_putchar_fd(c, fd);

//     return 0;
// }
