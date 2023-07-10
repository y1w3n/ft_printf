/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:54:21 by yitay             #+#    #+#             */
/*   Updated: 2023/06/09 19:40:36 by yitay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charnum(int n)
{
	int	charnum;

	charnum = 0;
	if (n < 0)
	{
		charnum++;
		n = -n;
	}
	while (n != 0)
	{
		charnum++;
		n = n / 10;
	}
	return (charnum);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		charnum;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	charnum = ft_charnum(n);
	str = (char *)malloc(sizeof(char) * (charnum + 1));
	if (!str)
		return (NULL);
	str[charnum] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[charnum - 1] = (n % 10) + '0';
		n = n / 10;
		charnum--;
	}
	return (str);
}
