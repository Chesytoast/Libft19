/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtin <mcourtin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:56:07 by mcourtin          #+#    #+#             */
/*   Updated: 2022/10/19 18:50:36 by mcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t		i;
	int			s;
	long int	f;
	long int	ftmp;

	f = 0;
	s = 1;
	i = 0;
	ftmp = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			s = -1;
	while (str[i] <= '9' && str [i] >= '0')
	{
		f = f * 10 + (str[i++] - 48);
		if (ftmp > f && s == 1)
			return (-1);
		if (ftmp > f && s == -1)
			return (0);
		ftmp = f;
	}
	return ((int)f * s);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// 	char str[] = "-922337203685477589";
// 	printf("%i\n", atoi(str));
// 	printf("%i\n", ft_atoi(str));
// }
