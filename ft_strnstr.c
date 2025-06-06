/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:37:12 by andresga          #+#    #+#             */
/*   Updated: 2023/12/02 12:27:09 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, unsigned int len)
{
	unsigned int	c1;
	unsigned int	c2;

	if (*little == '\0')
		return ((char *)big);
	c1 = 0;
	while (little[c1] != '\0')
		c1++;
	while (*big != '\0' && len >= c1)
	{
		if (*big == *little)
		{
			c2 = 0;
			while (c2 < c1 && big[c2] == little[c2])
				c2++;
			if (c2 == c1)
				return ((char *)big);
		}
		big++;
		len--;
	}
	return ((char *)0);
}

/*int	main(void)
{
	char	a[] = {"Hola pedro"};
	char    b[] = {"pedro"};
	printf("%s ", ft_strnstr(a, b, 20));
}*/