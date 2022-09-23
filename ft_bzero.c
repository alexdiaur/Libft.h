/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale <ale@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:58:58 by fdiaz             #+#    #+#             */
/*   Updated: 2022/09/23 08:19:05 by ale              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
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
