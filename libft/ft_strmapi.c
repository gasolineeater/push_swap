/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasolineeater <gasolineeater@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:18:44 by ezekaj            #+#    #+#             */
/*   Updated: 2025/04/05 10:09:35 by gasolineeat      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	lens;
	char	*news;

	if (!s || !f)
		return (NULL);
	i = 0;
	lens = ft_strlen(s);
	news = ft_calloc(lens + 1, sizeof(char));
	if (!news)
		return (0);
	while (s[i])
	{
		news[i] = f(i, s[i]);
		i++;
	}
	return (news);
}
