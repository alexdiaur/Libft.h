/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale <ale@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 09:39:19 by ale               #+#    #+#             */
/*   Updated: 2022/09/20 14:34:16 by fdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*#include <ctype.h>
#include <stdio.h>

int main()
{
     printf("Es print mía: %d\nOriginal: %d\n", ft_isprint(65), isprint(65));
	printf("No es print: %d\nOriginal: %d", ft_isprint(200), isprint(200));
 	 return (0);
}*/
