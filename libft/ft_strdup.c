/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasolineeater <gasolineeater@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:11:09 by ezekaj            #+#    #+#             */
/*   Updated: 2025/04/05 10:08:18 by gasolineeat      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (!s2)
		return (NULL);
	if (s1 == NULL)
		return (NULL);
	ft_memcpy(s2, s1, ft_strlen(s1));
	return (s2);
}
