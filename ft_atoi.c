/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:44:04 by fdiaz             #+#    #+#             */
/*   Updated: 2022/09/22 16:58:37 by fdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	result;

	num = 1;
	result = 0;
	while (*str <= 32)
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		num = -1;
		str++;
	}
	while (*str != '\0' && *str <= '9' && *str >= '0')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * num);
}

/*#include <string.h>
#include <stdio.h>

int main()
{
	printf("Original: %d\nMía : %d", atoi("-50"), ft_atoi("-50"));
	return (0);
}*/
