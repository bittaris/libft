/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:31:34 by ibittar           #+#    #+#             */
/*   Updated: 2024/05/13 13:54:42 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last_c;

	last_c = NULL;
	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			last_c = str;
		}
		str++;
	}
	if (*str == (char)c)
		last_c = str;
	return ((char *)last_c);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*strg = "Oh hi there!";
	int				a = 'h';
	char	result = *ft_strrchr(strg, a);
	
	printf("Last occurrance of the chosen char is: %c\n", result);
	return (0);
}*/
