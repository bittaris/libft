/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:48:25 by ibittar           #+#    #+#             */
/*   Updated: 2024/05/13 12:35:07 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_char_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t	trimmed_length(const char *s1, const char *set)
{
	size_t		len;
	const char	*start;
	const char	*end;

	len = ft_strlen((char *)s1);
	start = s1;
	end = s1 + len - 1;
	while (*start && is_char_set(*start, set))
		start++;
	while (end > start && is_char_set(*end, set))
		end--;
	if (end >= start)
		return (end - start + 1);
	else
		return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		trim_len;
	char		*empty_str;
	char		*trim_str;
	const char	*start;

	trim_len = trimmed_length(s1, set);
	if (trim_len == 0)
	{
		empty_str = malloc(1);
		if (!empty_str)
			return (NULL);
		empty_str[0] = '\0';
		return (empty_str);
	}
	start = s1;
	while (*start && is_char_set(*start, set))
		start++;
	trim_str = malloc(trim_len + 1);
	if (!trim_str)
		return (NULL);
	ft_strlcpy(trim_str, start, trim_len + 1);
	return (trim_str);
}
