/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:19:33 by andresga          #+#    #+#             */
/*   Updated: 2023/10/13 16:41:53 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	c;

	if (!set || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	c = ft_strlen(s1);
	while (c && ft_strchr(set, s1[c]))
		c--;
	return (ft_substr(s1, 0, c + 1));
}

/*int	main(void)
{
	char	a[] = {"paco_paco"};
	char    b[] = {"paco"};
	printf("%s ", ft_strtrim(a, b));
}*/
