/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:05:30 by andresga          #+#    #+#             */
/*   Updated: 2023/12/03 11:40:42 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		cont;

	cont = 0;
	while (s[cont])
		cont++;
	while (cont > 0)
	{
		if ((s[cont]) == (char)c)
			return ((char *)&s[cont]);
		cont--;
	}
	if ((char)c == s[cont])
		return ((char *)&s[cont]);
	return (NULL);
}

/*int	main(void)
{
	char	dest[] = {"Hola buenbas"};
	char x = 'b';
	printf("%s", ft_strrchr(dest,x));
}*/