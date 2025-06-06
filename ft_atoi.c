/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:43:20 by andresga          #+#    #+#             */
/*   Updated: 2023/12/02 12:18:35 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	c;
	int	x;
	int	neg;

	x = 0;
	c = 0;
	neg = 1;
	while ((str[c] >= 9 && str[c] <= 13) || str[c] == 32)
		c++;
	if ((str[c] == '-' || str[c] == '+'))
	{
		if (str[c] == '-')
			neg *= -1;
		c++;
	}
	while ((str[c] >= '0' && str[c] <= '9'))
	{
		x = x * 10 + (str[c] - '0');
		c++;
	}
	return (x * neg);
}

/*int main(void)
{
    char s1[] = {"676"};
	printf("%d",ft_atoi(s1));
    return (0);
}*/