/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:23:25 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/25 17:24:15 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

ssize_t	ft_putaddr(unsigned long l, char *str)
{
	ssize_t	len;
	ssize_t	temp;

	len = 0;
	temp = -1;
	ft_putstr_fd("0x", 1, &len);
	if (len == -1)
		return (len);
	temp = ft_putnbr_base(l, str);
	if (temp == -1)
		return (temp);
	return (len + temp);
}
