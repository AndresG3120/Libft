/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andtotalga <andtotalga@student.42malaga.com    +#+  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:50:35 by andtotalga          #+#    #+#           */
/*   Updated: 2023/12/02 12:17:08 by andtotalga         ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c1;
	unsigned int	c2;
	unsigned int	total;

	c1 = 0;
	c2 = 0;
	while (dest[c1])
		c1++;
	total = 0;
	while (src[total])
		total++;
	if (size <= c1)
		total += size;
	else
		total += c1;
	while (src[c2] && c1 + 1 < size)
		dest[c1++] = src[c2++];
	dest[c1] = '\0';
	return (total);
}

/*int	main(void)
{
	char	dst[] = {"Hola como estas"};
	char	src[] = {"dd"};
	ft_strlcat(dst,src,24);
	printf("%s",dst);
	return (0);
}*/
