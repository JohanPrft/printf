/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:11:52 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/29 14:49:46 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

ssize_t	ft_putunbr_b(unsigned long nb, char *base, ssize_t *len)
{
	size_t		blen;

	blen = ft_strlen(base);
	if (nb < blen && *len != -1)
		ft_putchar_fd(base[nb], 1, len);
	if (nb >= blen)
	{
		ft_putunbr_b(nb / blen, base, len);
		ft_putunbr_b(nb % blen, base, len);
	}
	return (*len);
}
