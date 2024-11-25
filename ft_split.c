/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbrech <aalbrech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 13:29:20 by aalbrech          #+#    #+#             */
/*   Updated: 2024/05/04 20:34:06 by aalbrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_new_word(char const *s, char c, int i)
{
	if (i == 0 && s[i] != c)
		return (1);
	if (i > 0 && s[i - 1] == c && s[i] != c)
		return (1);
	return (0);
}

static	int	ft_word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (ft_new_word(s, c, i) == 1)
			count++;
		i++;
	}
	return (count);
}

static	void	*ft_free(char **result)
{
	int	i;

	i = 0;
	while (result[i] != '\0')
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

static	char	**ft_fill_newstr(char **result, char const *s, int i, char c)
{
	int	begin;
	int	end;
	int	j;
	int	y;

	y = 0;
	while (s[++i] != '\0')
	{
		if (ft_new_word(s, c, i) == 1)
		{
			begin = i;
			j = i;
			while (s[j] != '\0' && s[j] != c)
				j++;
			end = j;
			result[y] = (char *)malloc((end - begin + 1) * sizeof(char));
			if (result[y] == NULL)
				return (NULL);
			result[y] = ft_memcpy(result[y], s + begin, end - begin);
			result[y][end - begin] = '\0';
			y++;
		}
	}
	result[y] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	result = (char **)malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	result = ft_fill_newstr(result, s, -1, c);
	if (result == NULL)
		return (ft_free(result));
	return (result);
}
