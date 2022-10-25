/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtin <mcourtin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:47:05 by mcourtin          #+#    #+#             */
/*   Updated: 2022/10/12 10:42:34 by mcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (0);
	i = 0;
	j = ft_strlen(s1);
	dst = malloc(sizeof(char) * (j + ft_strlen(s2)) + 1);
	if (!dst)
		return (0);
	while (i < j)
	{
		dst[i] = s1[i];
		i++;
	}
	while (s2[i - j])
	{
		dst[i] = s2[i - j];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
