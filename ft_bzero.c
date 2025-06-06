/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:39:37 by andresga          #+#    #+#             */
/*   Updated: 2023/10/13 17:01:26 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	char	*str;
	size_t	c;

	str = s;
	c = 0;
	while (c < len)
	{
		str[c] = '\0';
		c++;
	}
	return ;
}

/*int main(){
	char a[] = {"Hola"};
	ft_bzero(&a, 0);
	printf("%s", a);
	return ((0));
}*/
