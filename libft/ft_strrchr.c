/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:40:58 by yitay             #+#    #+#             */
/*   Updated: 2023/06/09 14:10:53 by yitay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;
	int	mark;

	i = 0;
	j = 0;
	mark = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			j = i;
			mark = 1;
		}
	i++;
	}
	if (mark)
		return ((char *)s + j);
	else if (c == '\0')
		return ((char *)s + i);
	else
		return (NULL);
}
