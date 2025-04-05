/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasolineeater <gasolineeater@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:45:38 by ezekaj            #+#    #+#             */
/*   Updated: 2025/04/05 10:04:14 by gasolineeat      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	short	m;
	int		res;

	m = 1;
	res = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == 43)
		str++;
	else if (*str == 45)
	{
		m = -1;
		str++;
	}
	while (*str && *str > 47 && *str < 58)
	{
		res *= 10;
		res += *str - 48;
		++str;
	}
	return (res * m);
}

// int main(void)
// {
// 	printf("%d\n", atoi(" 	--2147483648"));
// 	printf("%d\n", ft_atoi(" 	--2147483648"));
// }
