/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:39:39 by marvin            #+#    #+#             */
/*   Updated: 2022/11/29 13:50:03 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static ssize_t	node(const char *s, va_list	args, ssize_t *len)
{
	while (*s)
	{
		if (*s == '%' && *(s + 1) == 'c' && s++)
			ft_putchar_fd(va_arg(args, int), 1, len);
		else if (*s == '%' && *(s + 1) == 's' && s++)
			ft_putstr_fd(va_arg(args, char *), 1, len);
		else if (*s == '%' && *(s + 1) == 'p' && s++)
			ft_putaddr(va_arg(args, unsigned long), "0123456789abcdef", len);
		else if (*s == '%' && (*(s + 1) == 'd' || *(s + 1) == 'i') && s++)
			ft_putnbr_base(va_arg(args, int), "0123456789", len);
		else if (*s == '%' && *(s + 1) == 'u' && s++)
			ft_putnbr_base(va_arg(args, unsigned int), "0123456789", len);
		else if (*s == '%' && *(s + 1) == 'x' && s++)
			ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef", len);
		else if (*s == '%' && *(s + 1) == 'X' && s++)
			ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF", len);
		else if (*s == '%' && *(s + 1) == '%' && s++)
			ft_putchar_fd('%', 1, len);
		else
			ft_putchar_fd(*s, 1, len);
		if (*len == -1)
			return (-1);
		s++;
	}
	return (*len);
}

int	ft_printf(const char *s, ...)
{
	ssize_t	len;
	va_list	args;

	va_start(args, s);
	len = 0;
	node(s, args, &len);
	va_end(args);
	return ((int)len);
}
