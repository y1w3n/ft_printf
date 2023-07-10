/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:30:01 by yitay             #+#    #+#             */
/*   Updated: 2023/06/02 19:07:11 by yitay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (s1[i])
		i++;
	str = (char *)malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	j = 0;
	while (s1[j])
	{
		str[j] = s1[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

// int main()
// {
// 	printf("%s",ft_strdup("Hello"));
// }