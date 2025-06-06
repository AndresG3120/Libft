/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:06:49 by andresga          #+#    #+#             */
/*   Updated: 2023/12/02 12:47:18 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*p;
	size_t	c1;
	size_t	c2;

	c1 = -1;
	c2 = 0;
	if (!s1 || !s2)
		return (0);
	size = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	p = malloc(sizeof(char) * size + 1);
	if (!p)
		return (NULL);
	while (s1[++c1])
	{
		p[c1] = s1[c1];
	}
	while (s2[c2])
	{
		p[c1] = s2[c2];
		c1++;
		c2++;
	}
	p[c1] = '\0';
	return (p);
}

/*int	main(void)
{
	char s1[] = {"Hola que tal?"};
	char s2[] = {"Viva puentevedra"};
	printf("%s", ft_strjoin(s1, s2));
}*/