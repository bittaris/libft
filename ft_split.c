/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:07:45 by ibittar           #+#    #+#             */
/*   Updated: 2024/05/13 14:15:55 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_counter(char const *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			i++;
		}
		if (s[i] != '\0')
		{
			counter++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (counter);
}

static void	free_result(char **result)
{
	int	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static char	*alloc_wrd(const char *start, int len)
{
	char	*word;
	int		i;

	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static void	split_str(char const *s, char c, char **result)
{
	const char	*wrd_start;
	int			i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			wrd_start = s;
			while (*s && *s != c)
				s++;
			result[i++] = alloc_wrd(wrd_start, s - wrd_start);
			if (!*result[i - 1])
			{
				free_result(result);
				return ;
			}
		}
	}
	result[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	int			word_count;

	word_count = word_counter(s, c);
	result = malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	split_str(s, c, result);
	return (result);
}
