/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjniane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:06:09 by bjniane           #+#    #+#             */
/*   Updated: 2023/11/16 16:06:39 by bjniane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int main()
// {
// 	t_list *list = ft_lstnew("bilal");
// 	ft_lstadd_front(&list, ft_lstnew("hello"));
// 	ft_lstadd_front(&list, ft_lstnew("hahaha"));
// 	ft_lstadd_front(&list, ft_lstnew("yayaya"));
// 	t_list *current = list;
// 	while (current)
// 	{
// 		printf("%s ",current->content);
// 		current = current->next;
// 	}

// }