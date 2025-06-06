/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:07:32 by andresga          #+#    #+#             */
/*   Updated: 2023/11/29 13:07:32 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*arr_list;

	arr_list = malloc(sizeof(t_list));
	if (!arr_list)
		return (NULL);
	arr_list->content = content;
	arr_list->next = NULL;
	return (arr_list);
}

/*int main(void)
{
	t_list *p1;
	p1 = ft_lstnew("Hola");
	printf("El primer nodo es %p %s\n", p1 , (char *)p1->content);
	return (0);
}*/