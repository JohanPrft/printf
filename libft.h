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
# include <unistd.h>
# include <stdio.h> ///////////////////////////

void	ft_putchar_fd(char c, int fd, ssize_t *len);
size_t	ft_strlen(const char *s);
void	ft_putstr_fd(char *s, int fd, ssize_t *len);
ssize_t	ft_putnbr_base(long long nbr, char *base);

void	ft_putunbr_fd(unsigned int n, int fd);
void	ft_puthexa(long l, char *str);
ssize_t	ft_putaddr(unsigned long l, char *str);

#endif
