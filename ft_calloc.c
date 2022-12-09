/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale <ale@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 07:37:34 by ale               #+#    #+#             */
/*   Updated: 2022/12/08 08:42:05 by ale              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;
	size_t	aux;

	aux = count * size;
	if (aux == 1 && count != 1)
		return (NULL);
	pointer = malloc(aux);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, count * size);
	return (pointer);
}
