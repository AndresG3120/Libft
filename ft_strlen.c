/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:12:30 by andresga          #+#    #+#             */
/*   Updated: 2023/09/25 13:37:30 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	c;

	c = 0;
	while (*str)
	{
		c++;
		str++;
	}
	return (c);
}

/*int main(){
	char a[] = {"Hola"};
	printf("%d",ft_strlen(a));
	return ((0));
}*/
