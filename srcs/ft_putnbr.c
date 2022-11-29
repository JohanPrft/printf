/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:48:13 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/29 14:48:45 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

ssize_t	ft_putnbr(long nbr, ssize_t *len)
{
	if (nbr < 0)
	{
		ft_putchar_fd('-', 1, len);
		nbr *= -1;
	}
	if (*len != -1)
		ft_putunbr_b(nbr, "0123456789", len);
	return (*len);
}
