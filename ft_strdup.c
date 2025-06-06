/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 04:49:30 by andresga          #+#    #+#             */
/*   Updated: 2023/12/02 12:43:22 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		c;
	char	*copy;
	char	*s1b;

	s1b = (char *)s1;
	c = 0;
	copy = (char *)malloc((ft_strlen(s1b) + 1));
	if (copy == NULL)
		return (NULL);
	while (s1[c])
	{
		copy[c] = s1[c];
		c++;
	}
	copy[c] = '\0';
	return (copy);
}

/*int main(void)
{
	char s1[] = "Hola";
	printf("%s", ft_strdup(s1));
	return (0);
}*/
