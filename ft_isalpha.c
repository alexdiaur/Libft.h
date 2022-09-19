/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz <fdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 08:34:56 by fdiaz             #+#    #+#             */
/*   Updated: 2022/09/13 15:24:52 by fdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/*#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    printf("\n%d tendria que dar > 0", isalpha(97));
    printf("\n%d tendria que dar 0", isalpha(96));
    printf("\n%d tendria que dar > 0", ft_isalpha(97));
    printf("\n%d tendria que dar 0", isalpha(96));

    return 0;
}*/
