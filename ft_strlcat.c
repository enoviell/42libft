/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoviell <enoviell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:38:17 by enoviell          #+#    #+#             */
/*   Updated: 2023/01/24 12:36:54 by enoviell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (!src && !dst)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	j = 0;
	while (dst[j] && j < dstsize)
		j++;
	while ((i + j + 1) < dstsize && src[i])
	{
		dst[i + j] = src[i];
		i++;
	}
	if (j != dstsize)
		dst[i + j] = '\0';
	return (j + ft_strlen(src));
}

/*calcolandolunghezza delle stringhe di destinazione e di origine.
se la lunghezza delle due stringhe e > della dime max, copia solo la parte
 che ci sta nella stringa di destinazioneaggiungo il terminatore
altrimnentucopia tutta la stringa di src nella stringa di dest e si ritorna
la lunghezza totale delle due stringhe concaten.*/
