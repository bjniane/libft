/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjniane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:53:11 by bjniane           #+#    #+#             */
/*   Updated: 2023/11/16 15:55:23 by bjniane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// #include<stdio.h>
// int main()
// {
// 	int	x = 1;
// 	int	y = 2;
// 	int z = 3;

// 	t_list *h = ft_lstnew(&x);
// 	t_list *h1 = ft_lstnew(&y);
// 	t_list *h2 = ft_lstnew(&z);

// 	h->next = h1;
// 	h1->next = h2;
// 	// ft_lstadd_front(&h, h2);
// 	printf("%d   %d   %d", *(int *)h->content, *(int *)h1->content, *(int *)h2->content);
// }