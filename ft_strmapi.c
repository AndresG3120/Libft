/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:36:59 by andresga          #+#    #+#             */
/*   Updated: 2023/10/13 16:37:08 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	n;
	char	*str;

	if (s == NULL && f == NULL)
		return (NULL);
	n = ft_strlen((char *)s);
	str = (char *)malloc(sizeof(*s) * (n + 1));
	if (!str)
		return (NULL);
	n = 0;
	while (s[n] != '\0')
	{
		str[n] = f(n, s[n]);
		n++;
	}
	str[n] = '\0';
	return (str);
}
