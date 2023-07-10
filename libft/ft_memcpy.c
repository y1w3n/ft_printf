/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:01:07 by yitay             #+#    #+#             */
/*   Updated: 2023/06/10 20:54:33 by yitay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*c;
	size_t			i;

	if (dest == NULL && src == NULL)
		return (NULL);
	p = (unsigned char *)dest;
	c = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		p[i] = c[i];
		i++;
	}
	return (p);
}
