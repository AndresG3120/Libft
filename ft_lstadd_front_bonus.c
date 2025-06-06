/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:28:37 by andresga          #+#    #+#             */
/*   Updated: 2023/11/30 12:28:37 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*int main(void)
{
	t_list *p1;
	t_list *p2;
	p1 = ft_lstnew("Hola");
	p2 = ft_lstnew("Adios");
	printf("El primer nodo es %p y el segundo es %p\n", p1 , p1->next);
	ft_lstadd_front(&p1,p2);
	printf("El primer nodo es %p y el segundo es %p\n", p1 , p1->next);
	return (0);
}*/