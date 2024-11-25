/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbrech <aalbrech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:17:44 by aalbrech          #+#    #+#             */
/*   Updated: 2024/05/11 13:37:19 by aalbrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr_str1;
	unsigned char	*ptr_str2;
	size_t			i;
	int				diff;

	ptr_str1 = (unsigned char *)s1;
	ptr_str2 = (unsigned char *)s2;
	i = 0;
	diff = 0;
	while (i < n)
	{
		diff = *ptr_str1 - *ptr_str2;
		if (diff != 0)
			return (diff);
		ptr_str1++;
		ptr_str2++;
		i++;
	}
	return (diff);
}
