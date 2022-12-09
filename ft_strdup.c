/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale <ale@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 07:50:22 by ale               #+#    #+#             */
/*   Updated: 2022/12/08 07:56:55 by ale              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1aux;
	int		i;
	int		s1len;

	i = 0;
	s1len = ft_strlen(s1);
	s1aux = malloc(s1len + 1 * sizeof(char));
	if (!s1aux)
		return (0);
	while (i < s1len)
	{
		s1aux[i] = s1[i];
		i++;
	}
	s1aux[i] = '\0';
	return (s1aux);
}
