/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale <ale@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 06:51:21 by ale               #+#    #+#             */
/*   Updated: 2022/12/08 07:30:25 by ale              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	int			length;
	char		*haystack_aux;
	char		*needle_aux;

	if (*needle == '\0')
		return ((char *)haystack);
	haystack_aux = (char *)haystack;
	needle_aux = (char *)needle;
	i = 0;
	length = ft_strlen(needle_aux);
	while (haystack_aux[i] != '\0' && (i + length) <= len)
	{
		if (ft_strncmp((haystack_aux + i), needle_aux, length) == 0)
		{
			return (haystack_aux + i);
		}
		i++;
	}
	return (NULL);
}



