/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:41:39 by yel-aoun          #+#    #+#             */
/*   Updated: 2021/12/02 19:16:04 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printdec(int d)
{
	long long	s;

	s = d;
	if (s < 0)
	{
		ft_printchar('-');
		s *= -1;
	}
	if (s >= 10)
		ft_printdec(s / 10);
	ft_printchar((s % 10) + 48);
	return (ft_cal_dec(d));
}
