/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:36:44 by andresga          #+#    #+#             */
/*   Updated: 2023/10/13 17:11:51 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	n;

	n = 0;
	if (!(s == NULL && f == NULL))
	{
		while (s[n] != '\0')
		{
			f(n, &s[n]);
			n++;
		}
	}
}
