/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:03:11 by yel-aoun          #+#    #+#             */
/*   Updated: 2021/12/02 19:13:52 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_add(unsigned long long k)
{
	if (k >= 16)
		ft_print_add(k / 16);
	ft_printchar("0123456789abcdef"[k % 16]);
}

int	ft_printadd(unsigned long long k)
{
	ft_printchar('0');
	ft_printchar('x');
	ft_print_add(k);
	return (ft_cal_hexa(k) + 2);
}
