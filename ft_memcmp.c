/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale <ale@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 06:40:15 by ale               #+#    #+#             */
/*   Updated: 2022/12/08 08:42:15 by ale              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1aux;
	unsigned char	*s2aux;

	s1aux = (unsigned char *) s1;
	s2aux = (unsigned char *) s2;
	while (n > 0)
	{
		if (*s1aux != *s2aux)
			return (*s1aux - *s2aux);
		s1aux++;
		s2aux++;
		n--;
	}
	return (0);
}
