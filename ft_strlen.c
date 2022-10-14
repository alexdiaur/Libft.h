/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz <fdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:54:24 by fdiaz             #+#    #+#             */
/*   Updated: 2022/10/14 15:34:51 by fdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	i++;
	return (i);
}

/*#include <stdio.h>

int main()
{
	char str[5] = "Gata";
	size_t i = ft_strlen(str);
	printf("Este string tiene %zu caracteres", i);

}*/
