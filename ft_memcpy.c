/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale <ale@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:16:10 by fdiaz             #+#    #+#             */
/*   Updated: 2022/09/23 22:56:18 by ale              ###   ########.fr       */
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
	while (i < n)
	{
		*destine = *source;
		destine++;
		source++;
		i++;
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
}*/
