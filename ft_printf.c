/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:54:37 by yitay             #+#    #+#             */
/*   Updated: 2023/07/09 00:50:53 by yitay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_pointer(uintptr_t ptr, int *len)
{
	write(1, "0x", 2);
	if (!ptr)
	{
		write(1, "0", 1);
		(*len)++;
	}
	(*len) += 2;
	ft_print_pointer_len(ptr, len);
}

void	print_lhex(unsigned int x, int *len)
{
	if (!x)
	{
		write(1, "0", 1);
		(*len)++;
	}
	ft_print_hexalow_len(x, len);
}

void	print_uhex(unsigned int upperx, int *len)
{
	if (!upperx)
	{
		write(1, "0", 1);
		(*len)++;
	}
	ft_print_hexaup_len(upperx, len);
}

void	printcheck(char c, va_list ap, int *len)
{
	if (c == 'c')
		ft_print_char_len(va_arg(ap, int), len);
	if (c == 's')
		ft_print_string_len(va_arg(ap, char *), len);
	if (c == 'd' || c == 'i')
		ft_print_decimal_len(va_arg(ap, int), len);
	if (c == 'p')
		print_pointer((uintptr_t)va_arg(ap, void *), len);
	if (c == 'x')
		print_lhex(va_arg(ap, int), len);
	if (c == 'X')
		print_uhex(va_arg(ap, int), len);
	if (c == 'u')
		ft_print_unsigned_len(va_arg(ap, unsigned int), len);
	if (c == '%')
	{
		write(1, "%", 1);
		(*len) = (*len) + 1;
	}
	return ;
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			printcheck(s[i + 1], ap, &len);
			i++;
		}
		else
			ft_print_char_len(s[i], &len);
		i++;
	}
	va_end(ap);
	return (len);
}
