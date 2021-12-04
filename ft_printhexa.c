/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:27:01 by yel-aoun          #+#    #+#             */
/*   Updated: 2021/12/02 19:55:24 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexa(long long int x, char c)
{
	int	hex;

	hex = ft_cal_hexa(x);
	if (x >= 16)
		ft_printhexa(x / 16, c);
	if (c == 'x')
		ft_printchar("0123456789abcdef"[x % 16]);
	if (c == 'X')
		ft_printchar("0123456789ABCDEF"[x % 16]);
	return (hex);
}
