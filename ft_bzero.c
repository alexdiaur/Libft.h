/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz <fdiaz@student.42madrid.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:58:58 by fdiaz             #+#    #+#             */
/*   Updated: 2022/09/22 17:58:07 by fdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	/*int				i;
	unsigned char	*c;

	i = 0;
	c = s;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}*/
	ft_memset(s, '\0', n);
}

/*#include <string.h>
#include <stdio.h>

int	main()
{
	char str[5] = "RaBit";

	printf("Antes de mi bzero %s\n", str);
	ft_bzero(str, 2);
	printf("Después de mi bzero %s", str);
	return (0);
}*/
