/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:30:16 by andresga          #+#    #+#             */
/*   Updated: 2023/11/30 12:30:16 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	c;

	c = 0;
	while (lst)
	{
		lst = lst->next;
		c++;
	}
	return (c);
}

/*int main(void)
{
	t_list *p1;
	t_list *p2;
	t_list *p3;
	p1 = ft_lstnew("Hola");
	p3 = ft_lstnew("Espera un poco");
	p2 = ft_lstnew("Adios");
	ft_lstadd_back(&p1,p2);
	ft_lstadd_back(&p1,p3);
	printf("La lista tiene %d nodos\n", ft_lstsize(p1));
	return (0);
}*/