/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:53:08 by andresga          #+#    #+#             */
/*   Updated: 2023/10/13 18:11:37 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	c;

	c = 0;
	if (!s)
		return (NULL);
	if ((size_t)start > (size_t)ft_strlen(s))
		return (ft_strdup(""));
	if (len > (ft_strlen(s) - start))
		len = (ft_strlen(s) - start);
	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	while (c < len)
	{
		p[c] = s[c + start];
		c++;
	}
	p[c] = '\0';
	return (p);
}

/*int main(void)
{
	char s1[] = {"Hola buenas"};
	printf("%s", ft_substr(s1,5,6));
}*/