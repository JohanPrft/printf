/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:11:52 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/25 17:56:40 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	reccu(long long nb, char *base, int blen, ssize_t *len)
{
	if (nb < blen && *len != -1)
		ft_putchar_fd(base[nb], 1, len);
	if (nb >= blen)
	{
		reccu(nb / blen, base, blen, len);
		reccu(nb % blen, base, blen, len);
	}
}

ssize_t	ft_putnbr_base(long long nbr, char *base)
{
	size_t	blen;
	ssize_t	len;

	blen = ft_strlen(base);
	len = 0;
	if (nbr < 0)
	{
		ft_putchar_fd('-', 1, &len);
		nbr *= -1;
	}
	if (nbr < blen && len != -1)
		ft_putchar_fd(base[nbr], 1, &len);
	if (nbr >= blen && len != -1)
		reccu(nbr, base, blen, &len);
	return (len);
}

int	main(void)
{
	int	i;
	unsigned int u;

	i = -1;
	u = (unsigned int)i;
	printf("%u\n", u);
	ft_putnbr_base(u, "0123456789");
	return (0);
}
