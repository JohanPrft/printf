/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:32:33 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/29 10:08:36 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

ssize_t	ft_putstr_fd(char *s, int fd, ssize_t *len)
{
	if (s == NULL)
	{
		ft_putstr_fd("(null)", fd, len);
		return (*len);
	}
	while (*s && *len != -1)
	{
		ft_putchar_fd(*s, fd, len);
		s++;
	}
	return (*len);
}
