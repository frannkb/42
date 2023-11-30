/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankb <frankb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:11:17 by fbruno-s          #+#    #+#             */
/*   Updated: 2023/11/29 21:33:39 by frankb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h> // for size_t
#include <stddef.h> // For NULL
/*
** Mandatory part 1 - Libc functions
*/

int	ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);

/*
** Adictional function part 2 - Libc functions
*/
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);

#endif
