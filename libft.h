/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:04:39 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/25 17:15:09 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

ssize_t	ft_putchar_fd(char c, int fd, ssize_t *len);
size_t	ft_strlen(const char *s);
ssize_t	ft_putstr_fd(char *s, int fd, ssize_t *len);
ssize_t	ft_putnbr_base(long long nbr, char *base, ssize_t *len);
ssize_t	ft_putaddr(unsigned long l, char *str, ssize_t *len);

#endif
