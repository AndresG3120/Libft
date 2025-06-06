/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:38:13 by andresga          #+#    #+#             */
/*   Updated: 2023/12/04 12:34:16 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	ln;

	ln = '\n';
	write(fd, s, ft_strlen(s));
	write(fd, &ln, 1);
}

/*int main(){
	char *p = {"Hola como estas"};
	ft_putendl_fd(p,1);
	return ((0));
}*/