/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 19:45:08 by yitay             #+#    #+#             */
/*   Updated: 2023/06/10 21:37:26 by yitay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

static size_t	word_len(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}

char	**ft_split(const char *s, char c)
{
	char		**str;
	char		**str1;

	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!str)
		return (NULL);
	str1 = str;
	while (*s)
	{
		if (*s != c)
		{
			*str1 = ft_substr(s, 0, word_len(s, c));
			str1++;
			s += word_len(s, c);
		}
		else
			s++;
	}
	*str1 = 0;
	return (str);
}
