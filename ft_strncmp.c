/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbrech <aalbrech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:16:27 by aalbrech          #+#    #+#             */
/*   Updated: 2024/05/11 13:35:12 by aalbrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned int	diff;

	i = 0;
	diff = 0;
	while ((*s1 != '\0' || *s2 != '\0') && (i < n))
	{
		diff = (unsigned char)*s1 - (unsigned char)*s2;
		if (diff != 0)
			return (diff);
		i++;
		s1++;
		s2++;
	}
	return (diff);
}
