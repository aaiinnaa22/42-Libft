/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbrech <aalbrech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:15:55 by aalbrech          #+#    #+#             */
/*   Updated: 2024/05/11 13:31:50 by aalbrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	c_as_char;

	i = ft_strlen(s);
	c_as_char = (char)c;
	while (*s != '\0')
		s++;
	if (*s == c_as_char)
		return ((char *)s);
	while (i >= 0)
	{
		if (*s == c_as_char)
			return ((char *)s);
		i--;
		s--;
	}
	return (0);
}
