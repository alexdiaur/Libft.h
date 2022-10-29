/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale <ale@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:00:11 by ale               #+#    #+#             */
/*   Updated: 2022/10/29 15:29:14 by ale              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	srclen;

	i = 0;
	j = 0;
	srclen = ft_strlen(src);
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] && i + j + 1 < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (j != 0)
		dst[i + j] = '\0';
	return (srclen + i);
}

/*int main()
{
    char destine[] = "Loving Oio to ";
	char source[] = "the moon and back";
	size_t i = ft_strlen(source) + ft_strlen(destine) + 1;

	ft_strlcat(destine, source, i);
	printf("Con mi strlcay el string queda así: %s\n", destine);
	return (0);
}*/
