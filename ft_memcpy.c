/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:05:04 by ibittar           #+#    #+#             */
/*   Updated: 2024/05/13 12:39:27 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t value)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (value--)
	{
		*d++ = *s++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char	src[] = "Ohlala!";
	char	dest[20];
	char	system_dest[20];

	ft_memcpy(dest, src, strlen(src) + 1);
	printf("ft_memcpy copied string: %s\n", dest);
	memcpy(system_dest, src, strlen(src) + 1);
	printf("System memcpy copied string %s\n", system_dest);
	return (0);
}*/
