/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz <fdiaz@student.42madrid.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:54:24 by fdiaz             #+#    #+#             */
/*   Updated: 2022/09/19 16:19:13 by fdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s)
	i++;
	return(i);
}

int main()
{
	char str[5] = "Gata";
	size_t i = ft_strlen(str);
	printf("Este string tiene %d caracteres", i);

}
