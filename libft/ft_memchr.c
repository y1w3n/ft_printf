/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 19:00:08 by yitay             #+#    #+#             */
/*   Updated: 2023/06/10 17:51:57 by yitay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	i = 0;
	str = s;
	c = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
