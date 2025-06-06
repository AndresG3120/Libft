/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:30:46 by andresga          #+#    #+#             */
/*   Updated: 2023/11/30 12:30:46 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

/*int main(void)
{
	t_list *p1;
	t_list *p2;
	p1 = ft_lstnew("Hola");
	p2 = ft_lstnew("Adios");
	printf("El primer nodo es %p y el nodo a añadir es %p\n", p1 , p2);
	ft_lstadd_back(&p1,p2);
	printf("El ultimo nodo es %p\n", ft_lstlast(p1));
	return (0);
}*/