/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:08:06 by yitay             #+#    #+#             */
/*   Updated: 2023/06/02 19:06:49 by yitay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	result[200];
	int		i;

	i = 0;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}	
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n == 0)
		write(fd, "0", 1);
	while (n > 0)
	{
		result[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	while (i--)
		write(fd, &result[i], 1);
}

// int main()
// {
// 	ft_putnbr_fd(21111, 1);
// }
