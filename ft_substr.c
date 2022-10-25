/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtin <mcourtin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:05:11 by mcourtin          #+#    #+#             */
/*   Updated: 2022/10/20 16:41:28 by mcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*substr_less_long(char const *s, unsigned int c, size_t len, char *dst)
{
	size_t	i;

	i = 0;
	while (s[c] && len > i)
		dst[i++] = s[c++];
	dst[i] = '\0';
	return (dst);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
	{
		dst = ft_calloc(sizeof(char), 1);
		if (!dst)
			return (0);
		return (dst);
	}
	else if (ft_strlen(s) - start < len)
	{
		dst = malloc(sizeof(char) * ft_strlen(s) - start + 1);
		if (!dst)
			return (0);
	}
	else
		dst = malloc(sizeof(char) * len + 1);
	if (!dst)
		return (0);
	dst = substr_less_long(s, start, len, dst);
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int	main (void)
// {
// 	char str[] = "la substring";
// 	printf("%s\n", ft_substr(str, 1, 1000));
// }
