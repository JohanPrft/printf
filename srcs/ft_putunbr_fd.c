/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:20:22 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/25 14:36:34 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putunbr_fd(unsigned int n, int fd)
{
	if (n >= 0 && n <= 9)
		ft_putchar_fd(n + 48, fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putunbr_fd(n * -1, fd);
	}
	else if (n > 0)
	{
		ft_putunbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + 48, fd);
	}
}
