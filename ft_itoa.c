/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:37:29 by andresga          #+#    #+#             */
/*   Updated: 2023/12/02 12:05:26 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numsize(long n)
{
	size_t	len;

	len = 0;
	if (n == 0)
	{
		len++;
		return (len);
	}
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	ln;

	ln = n;
	len = ft_numsize(ln);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (ln < 0)
	{
		str[0] = '-';
		ln = ln * -1;
	}
	while (ln > 0)
	{
		str[len] = (ln % 10) + '0';
		ln /= 10;
		len--;
	}
	return (str);
}

/*int main(void)
{
	printf("%s", ft_itoa(642));
}*/