/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoviell <enoviell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:26:14 by enoviell          #+#    #+#             */
/*   Updated: 2023/01/23 17:59:31 by enoviell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str1;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	str1 = (char *)malloc(ft_strlen(s) + 1);
	if (!str1)
		return (NULL);
	while (str1[i] != '\0')
	{
		str1[i] = f (i, s[i]);
		i++;
	}
	str1[i] = '\0';
	return (str1);
}
