/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtin <mcourtin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:07:13 by mcourtin          #+#    #+#             */
/*   Updated: 2022/10/13 09:50:35 by mcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;
	size_t	p;

	if (!dstsize)
		return (ft_strlen(src));
	i = 0;
	l = ft_strlen(dst);
	p = l + ft_strlen(src);
	if (dstsize < l)
		return (ft_strlen(src) + dstsize);
	while (dst[i])
		i++;
	while (src[l - i] != '\0' && l < dstsize - 1)
	{
		dst[l] = src[l - i];
		l++;
	}
	dst[l] = '\0';
	return (p);
}
