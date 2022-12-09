/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale <ale@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:16:10 by fdiaz             #+#    #+#             */
/*   Updated: 2022/12/08 10:07:21 by ale              ###   ########.fr       */
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
