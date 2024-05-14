/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:08:12 by ibittar           #+#    #+#             */
/*   Updated: 2024/04/30 12:07:02 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*substr;

	if (s == NULL)
		return (NULL);
	s_len = 0;
	while (s[s_len] != '\0')
		s_len++;
	if (start >= s_len)
		len = 0;
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[len] = '\0';
	return (substr);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	*str = "Ohlala, look at this";
	unsigned int	start = 8;
	size_t	length = 12;
	char	*sub = ft_substr(str, start, length);

	if (sub == NULL)
		printf("Substring is NULL\n");
	else
	{
		printf("Substring: %s\n", sub);
		free(sub);
	}
	return (0);
}*/
