/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz <fdiaz@student.42madrid.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:00:24 by fdiaz             #+#    #+#             */
/*   Updated: 2022/09/13 15:24:07 by fdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



int ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c)); 
}

#include <ctype.h>
#include <stdio.h>

int main()
{
	printf("La original es %d, Mi versión %d", isalnum(32), ft_isalnum(32));
}
