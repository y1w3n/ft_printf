/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 20:49:34 by yitay             #+#    #+#             */
/*   Updated: 2023/06/10 21:55:00 by yitay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*store;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	while (ft_strchr(set, s1[len - 1]) && len > i)
		len--;
	store = ft_substr(s1, i, len - i);
	return (store);
}
