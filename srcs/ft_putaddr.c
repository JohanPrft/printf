/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:23:25 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/29 13:42:40 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

ssize_t	ft_putaddr(unsigned long l, char *str, ssize_t *len)
{
	if (ft_putstr_fd("0x", 1, len) == -1)
		return (-1);
	if (ft_putunbr_base(l, str, len) == -1)
		return (-1);
	return (*len);
}
