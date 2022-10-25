/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtin <mcourtin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:08:51 by mcourtin          #+#    #+#             */
/*   Updated: 2022/10/17 12:06:43 by mcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	l;
	char	*dst;

	if (!s || !f)
		return (NULL);
	l = ft_strlen(s);
	dst = malloc(sizeof(char) * l + 1);
	i = 0;
	if (!dst)
		return (NULL);
	while (s[i])
	{
		dst[i] = (f)(i, s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
