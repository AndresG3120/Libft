/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:30:32 by andresga          #+#    #+#             */
/*   Updated: 2023/12/02 12:25:44 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned int n)
{
	char	*p;

	p = dst;
	if (dst > src)
	{
		dst += n;
		src += n;
		while (n-- > 0)
		{
			*(char *)(--dst) = *(char *)(--src);
		}
	}
	else if (dst < src)
	{
		while (n-- > 0)
		{
			*(char *)(dst++) = *(char *)(src++);
		}
	}
	dst = p;
	return (dst);
}

/*int main(){
	char a[] = {"Hola"};
	char b[] = {"Adios"};
	printf("%s",(char *)memmove(&a, &b, 2));
	return ((0));
}*/
