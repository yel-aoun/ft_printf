/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:23:05 by yel-aoun          #+#    #+#             */
/*   Updated: 2021/12/03 21:19:10 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puts(char n, va_list ap)
{
	if (n == 'c')
		return (ft_printchar(va_arg(ap, int)));
	if (n == 's')
		return (ft_printstr(va_arg(ap, char *)));
	if (n == 'p')
		return (ft_printadd(va_arg(ap, unsigned long long)));
	if (n == 'd' || n == 'i')
		return (ft_printdec(va_arg(ap, int)));
	if (n == 'u')
		return (ft_printunsigned(va_arg(ap, unsigned int)));
	if (n == 'x' || n == 'X')
		return (ft_printhexa(va_arg(ap, unsigned int), n));
	if (n == '%')
		return (ft_printchar('%'));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		i[2];
	int		len;

	va_start(ap, s);
	i[0] = -1;
	i[1] = 0;
	len = 0;
	if (!s)
		return (0);
	while (s[++(i[0])])
	{
		if (s[(i[0])] == '%')
		{
			i[1] += ft_puts(s[(i[0]) + 1], ap);
			(i[0])++;
		}
		else
		{
			write (1, &s[(i[0])], 1);
			len++;
		}
	}
	va_end(ap);
	return (len + (i[1]));
}
