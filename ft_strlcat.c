/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoviell <enoviell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:38:17 by enoviell          #+#    #+#             */
/*   Updated: 2023/01/24 12:10:38 by enoviell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	max_len;

	if ( !src && !dst)
		return(0);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	max_len = dst_len + src_len;
	if (size <= dst_len)
		return (src_len + size);
	if (src_len < size - dst_len)
		memcpy(dst + dst_len, src, src_len + 1);
	else
	{
		memcpy(dst + dst_len, src, size - dst_len - 1);
		dst[size - 1] = '\0';
	}
	return (max_len);
}
/*calcolandolunghezza delle stringhe di destinazione e di origine.
se la lunghezza delle due stringhe e > della dime max, copia solo la parte
 che ci sta nella stringa di destinazioneaggiungo il terminatore
altrimnentucopia tutta la stringa di src nella stringa di dest e si ritorna
la lunghezza totale delle due stringhe concaten.*/
