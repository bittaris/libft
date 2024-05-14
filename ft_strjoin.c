/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:08:24 by ibittar           #+#    #+#             */
/*   Updated: 2024/05/02 15:33:38 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;

	if (!s1 && !s2)
	{
		return (NULL);
	}
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (s1)
		ft_strlcpy(str, (char *)s1, len + 1);
	if (s2)
		ft_strlcat(str, (char *)s2, len + 1);
	return (str);
}
/*#include <stdio.h>
int	main()
{
	const char	*s1 = "Ohlala, ";
	const char	*s2 = "check this out!";
	char	*result = ft_strjoin(s1, s2);

	printf("Final string: %s\n", result);
	free(result);
	return (0);
}*/
