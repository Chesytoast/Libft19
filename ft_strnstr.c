/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtin <mcourtin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:38:35 by mcourtin          #+#    #+#             */
/*   Updated: 2022/10/07 15:15:36 by mcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	b;

	i = 0;
	if (needle[i] == 0)
		return ((char *) haystack);
	while (i < len && haystack[i])
	{
		b = 0;
		while (haystack[i + b] == needle[b] && i + b < len)
		{
			if (needle[b + 1] == 0)
				return ((char *) &haystack[i]);
			b++;
		}
		i++;
	}
	return (0);
}
