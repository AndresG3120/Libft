/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:24:31 by andresga          #+#    #+#             */
/*   Updated: 2023/10/13 16:38:00 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	size_t	contador;

	str = b;
	contador = 0;
	while (contador < len)
	{
		str[contador] = (unsigned char)c;
		contador++;
	}
	return (b);
}

/*int main(){
	char a[] = {"Hola como estas"};
	printf("%s",(char *)ft_memset(&a, 'd', 5));
	return ((0));
}*/
