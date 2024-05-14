/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:16:07 by ibittar           #+#    #+#             */
/*   Updated: 2024/04/27 15:58:18 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;
	char	*byte_ptr;
	size_t	i;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	byte_ptr = (char *)ptr;
	i = 0;
	while (i < total_size)
	{
		byte_ptr[i] = 0;
		i++;
	}
	return (ptr);
}
