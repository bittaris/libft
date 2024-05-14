/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:52:33 by ibittar           #+#    #+#             */
/*   Updated: 2024/04/24 16:56:16 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	else
		return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	char	og[] = "OMG";
	int				i;

	printf("Og: %s\n", og);
	i = 0;
	while (og[i] != '\0')
	{
		char lowercase = ft_tolower(og[i]);
		printf("Uppercase version of %c: %c\n", og[i], lowercase);
		i++;
	}
	return (0);
}*/
