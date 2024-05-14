/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:17:04 by ibittar           #+#    #+#             */
/*   Updated: 2024/04/24 16:57:12 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t value)
{
	unsigned char	*p;

	p = (unsigned char *)ptr;
	while (value--)
	{
		*p++ = 0;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	char	buffer[10] = "Ohlala";

	printf("Before ft_bzero: %s\n", buffer);
	ft_bzero(buffer, sizeof(buffer));
	printf("After ft_bzero: %s\n", buffer);
	return (0);
}*/
