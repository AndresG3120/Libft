/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:59:54 by andresga          #+#    #+#             */
/*   Updated: 2023/12/02 12:15:59 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	size_t	c;

	c = 0;
	if (size > 0)
	{
		while (c < (size - 1) && src[c] != '\0')
		{
			dst[c] = src[c];
			c++;
		}
		dst[c] = '\0';
	}
	return (ft_strlen(src));
}

/*int	main(void)
{
	char	dst[] = {"Hola"};
	char	src[] = {"Adios"};

	ft_strlcpy(dst,src,3);
	printf("%s",dst);
}*/
