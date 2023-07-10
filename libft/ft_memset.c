/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:22:07 by yitay             #+#    #+#             */
/*   Updated: 2023/05/28 16:59:21 by yitay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*An unsigned char* is a block of memory. A void* is either a 
block of raw memory 
or a pointer of unknown type into the above unsigned char* 
(or unknown type pointer is erasure situations)*/

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = str;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
// int main()
// {
// 	unsigned char str[20] = "Hello";
// 	int c = 'A';
// 	size_t n = 2;
// 	printf("%s",ft_memset(str, c, n));
// }