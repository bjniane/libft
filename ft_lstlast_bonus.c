/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjniane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:22:00 by bjniane           #+#    #+#             */
/*   Updated: 2023/11/18 15:25:31 by bjniane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>
// int main()
// {
// 	int i= 9;
// 	int k=4;
// 	int l=8;

// 	t_list *h = ft_lstnew(&i);
// 	t_list *h1 = ft_lstnew(&k);
// 	t_list *h2 = ft_lstnew(&l);

// 	h->next = h1;
// 	h1->next = h2;
// 	h2->next = NULL;

// 	t_list *last = ft_lstlast(h);

// 	printf("%d", *(int *)(last->content));

// }