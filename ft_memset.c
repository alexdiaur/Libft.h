/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale <ale@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:41:33 by fdiaz             #+#    #+#             */
/*   Updated: 2022/09/23 11:59:11 by ale              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = b;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (b);
}

/*#include <string.h>
#include <stdio.h>
int main()
{
	char str[5] = "Hola";
	printf("Antes de: %s\n", str);
	ft_memset(str, '0', 2);
	printf("Después de: %s", str);
}*/
