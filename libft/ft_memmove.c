/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:37:03 by yitay             #+#    #+#             */
/*   Updated: 2023/06/10 20:54:47 by yitay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned int		i;
	unsigned char		*dest_p;
	const unsigned char	*src_p;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest_p = (unsigned char *)dest;
	src_p = (unsigned char *)src;
	i = 0;
	if (dest_p >= src_p)
	{
		i = 0;
		dest_p += len - 1;
		src_p += len - 1;
		while (i < len)
		{
			dest_p[0] = src_p[0];
			dest_p--;
			src_p--;
			i++;
		}
	}
	else
		ft_memcpy (dest, src, len);
	return (dest);
}

// int main()
// {
// 	char arr[] = "HEllo";
// 	printf("%s",ft_memmove(arr, arr, 5));
// }