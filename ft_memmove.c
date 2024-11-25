/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbrech <aalbrech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:12:10 by aalbrech          #+#    #+#             */
/*   Updated: 2024/05/11 13:28:57 by aalbrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;

	ptr_dest = (unsigned char *)dst;
	ptr_src = (const unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (dst);
	if (dst <= src)
	{
		while (len-- > 0)
		{
			*ptr_dest = *ptr_src;
			ptr_dest++;
			ptr_src++;
		}
	}
	if (dst > src)
	{
		while (len > 0)
		{
			ptr_dest[len - 1] = ptr_src[len - 1];
			len--;
		}
	}
	return (dst);
}
