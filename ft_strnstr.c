/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:44:53 by ibittar           #+#    #+#             */
/*   Updated: 2024/05/02 15:04:08 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *smol, size_t length)
{
	size_t	s_len;
	size_t	i;
	size_t	j;

	s_len = 0;
	while (smol[s_len] != '\0')
		s_len++;
	if (s_len == 0 || big == smol)
		return ((char *)big);
	if (length == 0)
		return (NULL);
	i = 0;
	while (big[i] != '\0' && i <= length)
	{
		j = 0;
		while (big[i + j] != '\0' && smol[j] != '\0'
			&& big[i + j] == smol[j] && i + j < length)
			j++;
		if (j == s_len)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
