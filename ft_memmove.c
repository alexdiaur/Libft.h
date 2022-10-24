/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz <fdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 23:46:49 by ale               #+#    #+#             */
/*   Updated: 2022/10/18 19:46:10 by fdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*source;
	unsigned char		*destine;
	size_t				i;

	source = src;
	destine = dest;
	i = 0;
	if (n > 0)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		while (n > 0)
		{
			destine[i] = source[i];
			i++;
			n--;
		}
	}
	return (destine);
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
