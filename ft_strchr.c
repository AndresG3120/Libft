/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:52:46 by andresga          #+#    #+#             */
/*   Updated: 2023/12/02 12:42:50 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	cont;

	cont = 0;
	while (s[cont])
	{
		if ((s[cont]) == (char)c)
			return ((char *)&s[cont]);
		cont++;
	}
	if ((char)c == s[cont])
		return ((char *)&s[cont]);
	return (NULL);
}

/*int	main(void)
{
	char	dest[] = {"Hola buenas"};
	char x = 'a';
	printf("%s", ft_strchr(dest,x));
}*/