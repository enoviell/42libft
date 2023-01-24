/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoviell <enoviell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:23:08 by enoviell          #+#    #+#             */
/*   Updated: 2023/01/22 17:01:32 by enoviell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	int		start;
	int		end;
	char	*result;
	int		i;
	int		j;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (start <= end && ft_strchr(set, s1[start]) != NULL)
	start++;
	while (end >= start && ft_strchr(set, s1[end]) != NULL)
		end--;
	result = (char *) malloc(end - start + 1);
	i = start;
	j = 0;
	while (i <= end)
		result[j++] = s1[i++];
	result[j] = '\0';
	return (result);
}
