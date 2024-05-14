/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:43:42 by ibittar           #+#    #+#             */
/*   Updated: 2024/05/13 12:53:53 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	length;
	char	*duplicate;
	size_t	i;

	length = 0;
	while (str[length] != '\0')
		length++;
	duplicate = (char *)malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	i = 0;
	while (i <= length)
	{
		duplicate[i] = str[i];
		i++;
	}
	return (duplicate);
}
