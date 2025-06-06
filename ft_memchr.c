/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:08:57 by andresga          #+#    #+#             */
/*   Updated: 2023/10/13 17:58:32 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			contador;
	unsigned char	*uc;

	uc = (unsigned char *)s;
	contador = 0;
	while (contador < n)
	{
		if ((uc[contador]) == (unsigned char)c)
		{
			return ((void *)(uc + contador));
		}
		contador++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	str[] = {"Hola buenas"};
	printf("%s", (char *)ft_memchr(str,'l',5));
}*/