/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoviell <enoviell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:11:08 by enoviell          #+#    #+#             */
/*   Updated: 2023/01/20 15:51:09 by enoviell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}

/*utilizzando un indice (i) per iterare attraverso la stringa.
 Utilizza un ciclo while per
iterare attraverso la stringa e controllare ogni
carattere rispetto al carattere
di destinazione.
Se si trova una corrispondenza,
la funzione restituisce un puntatore a quel
carattere sommando l'indice corrente (i)
 all'indirizzo base della stringa. Se si raggiunge la fine
della stringa senza trovare una corrispondenza, la funzione restituisce NULL.*/
