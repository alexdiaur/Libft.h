/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale <ale@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 09:39:19 by ale               #+#    #+#             */
/*   Updated: 2022/09/15 14:45:43 by fdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int ft_isprint(int c)
{
    return (c >= 32 && c <= 126);
}

#include <ctype.h>
#include <stdio.h>

int main()
{
     printf("Con mi versión es print: %d\nCon la original es print: %d\nCon mi version no es print: %d\nCon la original no es print: %d\n", ft_isprint(65), isprint(65), ft_isprint(200), isprint(200));
    return (0);
}
