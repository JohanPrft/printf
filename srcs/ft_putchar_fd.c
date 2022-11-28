/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:29:32 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/25 16:19:54 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

ssize_t	ft_putchar_fd(char c, int fd, ssize_t *len)
{
	if (write(fd, &c, 1) == -1)
		*len = -1;
	else
		(*len)++;
	return (*len);
}
