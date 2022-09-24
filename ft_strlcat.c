/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale <ale@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:00:11 by ale               #+#    #+#             */
/*   Updated: 2022/09/24 13:27:45 by ale              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	while (src[j] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}

/*int main()
{
    char destine[16] = "Loving Oio to ";
	char source[] = "the moon and back";
	size_t i = ft_strlen(destine) + ft_strlen(source);

	ft_strlcat(destine, source, i);
	printf("Con mi strlcay el string queda así: %s\n", destine);
	return (0);
}*/
