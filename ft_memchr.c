/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbrech <aalbrech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:17:02 by aalbrech          #+#    #+#             */
/*   Updated: 2024/05/11 13:36:17 by aalbrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str_ptr;
	unsigned char	c_temp;

	i = 0;
	str_ptr = (unsigned char *)s;
	c_temp = (unsigned char)c;
	while (i < n)
	{
		if (*str_ptr == c_temp)
			return ((void *)s);
		i++;
		str_ptr++;
		s++;
	}
	return (0);
}
