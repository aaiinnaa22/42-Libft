/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbrech <aalbrech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:15:14 by aalbrech          #+#    #+#             */
/*   Updated: 2024/05/11 13:33:47 by aalbrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	c_as_char;

	c_as_char = (char)c;
	while (*s != '\0')
	{
		if (*s == c_as_char)
			return ((char *)s);
		s++;
	}
	if (*s == c_as_char)
		return ((char *)s);
	return (0);
}
