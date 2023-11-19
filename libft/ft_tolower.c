/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07-ft_tolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbruno-s <fbruno-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 22:00:42 by fbruno-s          #+#    #+#             */
/*   Updated: 2023/11/18 22:01:43 by fbruno-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
