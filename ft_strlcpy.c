/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:38:52 by ibittar           #+#    #+#             */
/*   Updated: 2024/05/06 13:05:23 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_length;
	size_t	i;

	src_length = 0;
	if (size == 0)
		return (ft_strlen((char *)src));
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_length);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Ohlala, it works!";
	char	dest[18];
	size_t	src_len = ft_strlcpy(dest, src, sizeof(dest));

	printf("Source string: %s\n", src);
	printf("Destination string: %s\n", dest);
	printf("Source string length: %zu\n", src_len);
	return (0);
}*/
