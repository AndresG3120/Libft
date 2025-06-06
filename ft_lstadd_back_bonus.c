/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:31:28 by andresga          #+#    #+#             */
/*   Updated: 2023/11/30 12:31:28 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if (last)
		last->next = new;
	else
		*lst = new;
}

/*int main(void)
{
	t_list *p1;
	t_list *p2;
	p1 = ft_lstnew("Hola");
	p2 = ft_lstnew("Adios");
	printf("El primer nodo es %p y el segundo es %p\n", p1 , p1->next);
	ft_lstadd_back(&p1,p2);
	printf("El primer nodo es %p y el segundo es %p\n", p1 , p1->next);
	return (0);
}*/