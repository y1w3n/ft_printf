/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 12:28:12 by yitay             #+#    #+#             */
/*   Updated: 2023/07/02 15:57:24 by yitay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	if ((int)count < 0 && (int)size < 0)
		return (NULL);
	if ((count * size) > INT_MAX)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < (count * size))
		ptr[i++] = 0;
	return ((void *)ptr);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	// char *s = ft_calloc(-5, -5);
// 	char *s = calloc(-5, -5);

// 	int i;

// 	i = 0;
// 	while (i < 100)
// 	{
// 		printf("%d", s[i]);
// 		i++;
// 	}
// }
