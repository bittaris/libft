/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:07:50 by ibittar           #+#    #+#             */
/*   Updated: 2024/05/06 13:03:04 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	while (dst[dst_len] != '\0' && dst_len < size)
		dst_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (dst_len >= size)
		return (size + src_len);
	i = dst_len;
	while (i < size - 1 && *src)
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
/*
#include <string.h>
#include <stdio.h>

int	main()
{
	char	dest[29] = "Ohlala ";
	const char	*src = "look at this! No way!";
	size_t	dest_size = sizeof(dest) / sizeof(dest[0]);
	size_t	result = ft_strlcat(dest, src, dest_size);

	printf("Result: %zu\n", result);
	printf("Final dest: %s\n", dest);
	return (0);
}*/
