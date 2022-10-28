/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale <ale@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 23:46:49 by ale               #+#    #+#             */
/*   Updated: 2022/10/27 11:55:13 by ale              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_aux;
	unsigned char	*src_aux;

	dst_aux = (unsigned char *)dst;
	src_aux = (unsigned char *)src;
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (dst > src)
		while (len--)
			dst_aux[len] = src_aux[len];
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
