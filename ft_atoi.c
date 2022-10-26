/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz <fdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:44:04 by fdiaz             #+#    #+#             */
/*   Updated: 2022/10/26 17:44:49 by fdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		num;
	size_t	result;

	num = 1;
	result = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
		if (*str == '-')
		num = -1;
		str++;
	while (*str != '\0' && *str <= '9' && *str >= '0')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	if (result > 2147483647 && num > 0)
		return (-1);
	if (result > 2147483648 && num < 0)
		return (0);
	return (result * num);
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
// 	printf("Original: %d\n", atoi("-32254364758697786543234567890876543"));
// 	printf("Mine: %d",  ft_atoi("-567890876546787865789098765"));
// 	return (0);
// }