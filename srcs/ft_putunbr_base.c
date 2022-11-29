/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:46:18 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/29 13:53:04 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	reccuu(unsigned long nb, char *base, size_t blen, ssize_t *len)
{
	if (nb < blen && *len != -1)
		ft_putchar_fd(base[nb], 1, len);
	if (nb >= blen)
	{
		reccuu(nb / blen, base, blen, len);
		reccuu(nb % blen, base, blen, len);
	}
}

ssize_t	ft_putunbr_base(unsigned long nbr, char *base, ssize_t *len)
{
	size_t		blen;

	blen = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar_fd('-', 1, len);
		nbr *= -1;
	}
	if (nbr < blen && *len != -1)
		ft_putchar_fd(base[nbr], 1, len);
	if (nbr >= blen && *len != -1)
		reccuu(nbr, base, blen, len);
	return (*len);
}
