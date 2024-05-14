/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:27:59 by ibittar           #+#    #+#             */
/*   Updated: 2024/04/24 16:57:39 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	else
		return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	char	og_input[] = "Ohmygod";
	int				i;

	printf("Og input: %s\n", og_input);
	i = 0;
	while (og_input[i] != '\0')
	{
		char	uppercase = ft_toupper(og_input[i]);
		printf("Uppercase version of %c: %c\n", og_input[i], uppercase);
		i++;
	}
	return 0;
}*/
