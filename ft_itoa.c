/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbrech <aalbrech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:26:00 by aalbrech          #+#    #+#             */
/*   Updated: 2024/05/06 17:18:38 by aalbrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (count = 1);
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static	char	*ft_int_min(int n)
{
	char	*str;
	int		int_min_len;

	int_min_len = 11;
	str = (char *)malloc((int_min_len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[int_min_len--] = '\0';
	str[int_min_len--] = '8';
	n = 214748364;
	while (n > 0)
	{
		str[int_min_len--] = (n % 10) + '0';
		n = n / 10;
	}
	str[int_min_len] = '-';
	return (str);
}

static	char	*ft_filling_str(int count, char *str, int negative, int n)
{
	str[count--] = '\0';
	if (n == 0)
		str[count--] = '0';
	while (n > 0)
	{
		str[count--] = (n % 10) + '0';
		n = n / 10;
	}
	if (negative == 1)
		str[count] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*str;
	int		negative;

	count = 0;
	if (n == -2147483648)
		return (ft_int_min(n));
	if (n < 0)
	{
		n = n * (-1);
		count++;
		negative = 1;
	}
	count = count + ft_count(n);
	str = (char *)malloc((count + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str = ft_filling_str(count, str, negative, n);
	return (str);
}
