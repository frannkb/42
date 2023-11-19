/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbruno-s <fbruno-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:15:00 by fbruno-s          #+#    #+#             */
/*   Updated: 2023/11/18 22:02:18 by fbruno-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "functions.h"
// #include "libft.h"
#include <stdlib.h>
#include <ctype.h>

int	main(void)
{
	char ch =  254;
	printf("%d", ft_toupper(ch));

	printf("\n");

	printf("%d", toupper(ch));
}
