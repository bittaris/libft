/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:50:32 by ibittar           #+#    #+#             */
/*   Updated: 2024/05/13 12:46:17 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t value)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src && value > 0)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		while (value--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		d += value;
		s += value;
		while (value--)
		{
			*(--d) = *(--s);
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[] = "Ohlala! Check this out!!";
	char str2[20];
	char str3[20];

	ft_memmove(str2, str1, strlen(str1 + 1));
	printf("str2 after ft_memmove: %s\n", str2);

	memmove(str3, str1, strlen(str1 + 1));
	printf("str3 after memmove: %s\n", str3);

	return (0);
}*/
