/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtin <mcourtin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:06:22 by mcourtin          #+#    #+#             */
/*   Updated: 2022/10/19 18:07:14 by mcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	is_set(const char *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	size_t	c;
	char	*trimmed;

	if (!s1 || !set)
		return (0);
	i = 0;
	c = 0;
	len = ft_strlen(s1);
	while (is_set(set, s1[i]) == 1)
		i++;
	if (i == len)
	{
		trimmed = ft_calloc(sizeof(char), 1);
		if (!trimmed)
			return (0);
		return (trimmed);
	}
	while (is_set(set, s1[len -1]) == 1)
		len--;
	trimmed = ft_substr(s1, i, len - i);
	if (!trimmed)
		return (0);
	return (trimmed);
}
