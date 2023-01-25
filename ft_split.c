/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoviell <enoviell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:39:30 by enoviell          #+#    #+#             */
/*   Updated: 2023/01/25 11:12:46 by enoviell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] == c)
			i++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
		if (s[i] == c && s[i + 1] == '\0')
			break ;
	}
	return (count + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	i = 0;
	matrix = malloc(sizeof(char *) * (ft_counter(s, c)));
	if (!matrix)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			j = 0;
			while (*s && *s != c && ++j)
				++s;
			matrix[i++] = ft_substr(s - j, 0, j);
		}
		else
			++s;
	}
	matrix[i] = 0;
	return (matrix);
}
