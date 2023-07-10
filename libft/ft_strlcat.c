/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 19:11:47 by yitay             #+#    #+#             */
/*   Updated: 2023/06/10 23:27:44 by yitay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_length;
	size_t	temp;

	if (!dstsize)
		return (ft_strlen(src));
	temp = ft_strlen(dst);
	dst_length = temp;
	if (dstsize <= dst_length)
		return (dstsize + ft_strlen(src));
	i = 0;
	while (dst_length < (dstsize - 1) && dstsize && src[i])
		dst[dst_length++] = src[i++];
	dst[dst_length] = '\0';
	if (dstsize > temp)
		return (temp + ft_strlen(src));
	return (dstsize + ft_strlen(src));
}

// int	main(void)
// {
// 	char dest[15];
// 	int		dest_len;
// 	dest_len = 15;
// 	memset(dest, 0, dest_len);
// 	memset(dest, 'r', 15);
// 	printf("dest is %s\n", dest);
// 	ft_strlcat(dest, "lorem ipsum dolor sit amet", 5);
// 	printf("return is %zu\n", 
//ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
// 	printf("dest is %s\n", dest);
// }