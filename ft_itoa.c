/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtin <mcourtin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:01:51 by mcourtin          #+#    #+#             */
/*   Updated: 2022/10/20 16:52:27 by mcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	nb_char(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t		l;
	char		*nb;
	long int	c;

	c = n;
	l = nb_char(c);
	nb = malloc(sizeof(char) * l + 1);
	if (!nb)
		return (0);
	nb[l--] = '\0';
	if (c == 0)
		nb[0] = 48;
	if (c < 0)
	{
		nb[0] = '-';
		c *= -1;
	}
	while (c > 0)
	{
		nb[l--] = c % 10 + 48;
		c /= 10;
	}
	return (nb);
}
