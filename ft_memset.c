/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:55:29 by ibittar           #+#    #+#             */
/*   Updated: 2024/05/02 15:02:40 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *ptr, int symbol, int length)
{
	unsigned char	*pointer;
	int				i;

	pointer = ptr;
	i = 0;
	while (length > 0)
	{
		pointer[i] = symbol;
		i++;
		length--;
	}
	return (ptr);
}
/*
#include <stdio.h>

int	main()
{
	char str[10] = "Ohlala!!!";

	printf("Before ft_memset: %s\n", str);

	ft_memset(str + 2, '*', 3);

	printf("After memset: %\n", str);

	return (0);
}
*/
