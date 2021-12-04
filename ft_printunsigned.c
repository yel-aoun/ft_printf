/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:53:55 by yel-aoun          #+#    #+#             */
/*   Updated: 2021/12/02 19:58:59 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned(unsigned int v)
{
	long int	x;

	x = v;
	if (x >= 10)
		ft_printunsigned(x / 10);
	ft_printchar((x % 10) + 48);
	return (ft_cal_dec(v));
}
