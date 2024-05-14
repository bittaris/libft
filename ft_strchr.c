/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:31:35 by ibittar           #+#    #+#             */
/*   Updated: 2024/05/02 15:57:59 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			return ((char *)str);
		}
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	*str = "Ohlala";
	char	*ptr = ft_strchr(str, 'l');
	
	printf("First instance of the chosen char: %c\n", *ptr);
	return (0);
}*/
