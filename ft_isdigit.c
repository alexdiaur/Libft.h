/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz <fdiaz@student.42madrid.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:53:23 by fdiaz             #+#    #+#             */
/*   Updated: 2022/09/13 15:01:48 by fdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

/*#include <ctype.h>
#include <stdio.h>
int main()
{
	printf("Tendría que dar > 0: mi función: %d, la original: %d\n", ft_isdigit(48), isdigit(48));
	printf("Tendría que dar 0 : mi función: %d,  la original: %d\n", ft_isdigit(59), isdigit(59));
}*/
