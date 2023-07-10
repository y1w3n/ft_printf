/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 12:08:07 by yitay             #+#    #+#             */
/*   Updated: 2023/06/10 20:40:06 by yitay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*h;

	i = 0;
	h = (char *)haystack;
	if (len == 0 && haystack == 0)
		return (NULL);
	if (needle[0] == 0)
		return (h);
	while (h[i] && i < len)
	{
		j = 0;
		while (h[i + j] && i + j < len && h[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)h + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
