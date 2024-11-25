/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbrech <aalbrech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:23:06 by aalbrech          #+#    #+#             */
/*   Updated: 2024/05/04 19:44:26 by aalbrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	ft_is_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return ('N');
		i++;
	}
	return ('Y');
}

static	int	ft_begin_of_str(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (ft_is_set(set, s1[i]) != 'Y'))
		i++;
	return (i);
}

static	int	ft_end_of_str(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while ((ft_is_set(set, s1[i]) != 'Y') && (i >= 0))
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		begin;
	int		end;
	char	*trimmed;
	int		final_len;

	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	if (s1 == NULL || set == NULL)
		return (ft_strdup(""));
	begin = ft_begin_of_str(s1, set);
	end = ft_end_of_str(s1, set);
	final_len = end - begin + 1;
	trimmed = ft_substr(s1, begin, final_len);
	return (trimmed);
}
