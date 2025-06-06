/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:24:22 by andresga          #+#    #+#             */
/*   Updated: 2023/10/13 16:37:49 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			c;
	unsigned char	*s1b;
	unsigned char	*s2b;

	s1b = (unsigned char *)s1;
	s2b = (unsigned char *)s2;
	c = 0;
	while (c < n)
	{
		if (s1b[c] != s2b[c])
			return (s1b[c] - s2b[c]);
		c++;
	}
	return (0);
}

/*int	main(void)
{
	char	s1[] = {"Hola buenas"};
	char    s2[] = {"Hola adios"};
	printf("%d", ft_memcmp(s1,s2,6));
}*/