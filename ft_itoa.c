/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:43:27 by ibittar           #+#    #+#             */
/*   Updated: 2024/05/13 12:04:33 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_counter(int n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n >= 10)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	len;
	int		sign;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = digit_counter(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		sign = -1;
		str[0] = '-';
		n = -n;
	}
	else
		sign = 1;
	while (--len >= (sign == -1))
	{
		str[len] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
