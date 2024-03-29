/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:04:39 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/29 15:05:22 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

ssize_t	ft_putchar_fd(char c, int fd, ssize_t *len);
ssize_t	ft_putstr_fd(char *s, int fd, ssize_t *len);
ssize_t	ft_putnbr(long nbr, ssize_t *len);
ssize_t	ft_putunbr_b(unsigned long nb, char *base, ssize_t *len);
ssize_t	ft_putaddr(unsigned long l, char *str, ssize_t *len);
int		ft_printf(const char *s, ...);

#endif
