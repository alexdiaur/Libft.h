/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale <ale@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 00:36:49 by fdiaz             #+#    #+#             */
/*   Updated: 2022/10/29 23:58:03 by ale              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (dstsize == '\0')
		return (srclen);
	while (src[i] != '\0' && i < (dstsize -1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
	char source[16] = "Loving Oio to...";
	char destine[] = "";
	size_t i = 5; 

	ft_strlcpy(destine, source, i);
	printf("El Tamaño en destine es: %s\n", destine);
	return (0);

}*/
