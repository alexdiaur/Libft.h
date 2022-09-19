/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz<fdiaz@student.42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 08:05:29 by fdiaz             #+#    #+#             */
/*   Updated: 2022/09/19 10:27:54 by fdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*#include <ctype.h>
#include <stdio.h>

int main()
{    
    printf("Mi versión sí: %d\nOriginal sí: %d\n", ft_isascii(97), isascii(97));
	printf("Mi versión no: %d\nOriginal no: %d", ft_isascii(128), isascii(128));
    return (0);
}*/
