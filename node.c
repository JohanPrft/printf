/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:58:57 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/25 11:26:05 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	node(const char *s, va_list	args)
{
	while (*s)
	{
		if (*s && *(s++) == 'c')
			return (ft_putchar_fd(va_arg(args, char), 1));
		else if (*s && *(s++) == 's')
			return (ft_putstr_fd(va_arg(args, char *), 1));
		else if (*s && *(s++) == 'p')
			return (ft_putaddr(va_arg(args, unsigned long), "0123456789abcdef"));
		else if (*s && *(s++) == 'd' || *(s) == 'i')
			return (ft_putstr_fd(ft_itoa(va_arg(args, int)), 1));
		else if (*s && *(s++) == 'u')
			return (ft_putunbr_fd(va_arg(args, int), 1));
		else if (*s && *(s++) == 'x')
			return (ft_puthexa(va_arg(args, unsigned long), "0123456789abcdef"));
		else if (*s && *(s++) == 'X')
			return (ft_puthexa(va_arg(args, unsigned long), "0123456789ABCDEF"));
		else if (*s && *(s++) == '%')
			return (ft_putchar_fd('%', 1));
		else
			write(1, &s, 1);
		s++;
	}
}

unsigned int	isinstr(char c, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_printf(const char *s, ...)
{
	int		num_args;
	va_list	args;

	va_start(args, s);
	node(s, args);
	va_end(args);
	return (0);
}

int	main(void)
{
	int	i;

	i = 0;
	printf("%i", i);
	ft_printf("%i", i);
	return (0);
}
