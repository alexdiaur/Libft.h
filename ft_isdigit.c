/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz <fdiaz@student.42madrid.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:53:23 by fdiaz             #+#    #+#             */
/*   Updated: 2022/09/20 14:27:49 by fdiaz            ###   ########.fr       */
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
	printf("Será > 0: mía: %d, origin: %d\n", ft_isdigit(48), isdigit(48));
	printf("Será 0 : mía: %d,  origin: %d\n", ft_isdigit(59), isdigit(59));
}*/
