/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05-ft_isprint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbruno-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:41:51 by fbruno-s          #+#    #+#             */
/*   Updated: 2023/11/18 21:42:19 by fbruno-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
