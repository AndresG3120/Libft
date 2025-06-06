/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:38:27 by andresga          #+#    #+#             */
/*   Updated: 2023/12/02 12:27:40 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcounter(char const *s, char c)
{
	size_t	c1;
	size_t	c2;

	c1 = 0;
	c2 = 0;
	while (s[c1] != '\0')
	{
		if (s[c1] != c && (s[c1 + 1] == c || s[c1 + 1] == '\0'))
			c2++;
		c1++;
	}
	return (c2);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	len;
	size_t	n;

	str = malloc(sizeof(char *) * (ft_wordcounter(s, c) + 1));
	if (!str)
		return (0);
	n = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c)
			{
				++len;
				++s;
			}
			str[n++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	str[n] = 0;
	return (str);
}

/*int	main(void)
{
	int c;
	char *str[] = {"Hola como estas marrano"};

	c = 0;
	char **p = ft_split(*str,' ');
	while (c < 4)
	{
		ft_putendl_fd(p[c],1);
		c++;
	}
	return (0);
}*/
