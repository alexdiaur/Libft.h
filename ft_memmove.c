/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz <fdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 23:46:49 by ale               #+#    #+#             */
/*   Updated: 2022/10/26 18:36:15 by fdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*source;
	char	*destine;

	source = (char *)src;
	destine = (char *)dst;
	if (dst == NULL && src == NULL) 
		return (dst);
	if (dst < src)
	{
		ft_memcpy(dst, src, len);
	}
	else
	{
		while (len > 0)
		{
			destine[len] = source[len];
			len--;
		}
	}
	return (dst);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    unsigned char destino[100];
    unsigned char fuente[100] = "Guataverygoodsup";
    size_t n = 9;

    printf("Destino antes del memcpy: %s\n", destino);
    ft_memmove(destino, fuente, n);
    printf("Destino después del memcpy:%s\n", destino);
  
    return (0);   
}*/
