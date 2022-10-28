/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale <ale@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:44:04 by fdiaz             #+#    #+#             */
/*   Updated: 2022/10/27 11:54:46 by ale              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	size_t	result;

	sign = 1;
	result = 0;
	while (*str == 32 || (*str > 8 && *str < 14))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
				sign *= -1;
		str++;
	}
	while (*str != '\0' && *str <= '9' && *str >= '0')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	if (result > 2147483647 && sign == 1)
		return (-1);
	if (result > 2147483648 && sign == -1)
		return (0);
	return (result * sign);
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
// 	printf("Original: %d\n", atoi("-32254364758697786543234567890876543"));
// 	printf("Mine: %d",  ft_atoi("-567890876546787865789098765"));
// 	return (0);
// }