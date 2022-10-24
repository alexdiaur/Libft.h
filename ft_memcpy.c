/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz <fdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:16:10 by fdiaz             #+#    #+#             */
/*   Updated: 2022/10/18 18:09:39 by fdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*source;
	unsigned char		*destine;
	size_t				i;

	i = 0;
	destine = dst;
	source = src;
	if (!dst && !src)
		return (0);
	while (n > 0)
	{
		destine[i] = source[i];
		i++;
		n--;
	}
	return (destine);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    unsigned char destino[100];
    unsigned char fuente[100] = "Guataverygoodsup";

    printf("Destino antes del memcpy: %s\n", destino);
    ft_memcpy(destino, fuente, 9);
    printf("Destino después del memcpy:%s\n", destino);
  
    return (0);   
	char	src[] = "test basic du memcpy !";
			char	buff1[22];

			char	*r1 = memcpy(buff1, src, 22);
			char	*r2 = ft_memcpy(buff1, src, 22);
			

			r1 = memcpy("", src, 0);
			r2 = ft_memcpy("", src, 0);
			printf("%d\n", memccpy);
			printf("%d\n", ft_memcpy);
}*/
