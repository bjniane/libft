/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjniane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 00:27:00 by bjniane           #+#    #+#             */
/*   Updated: 2023/11/19 00:28:05 by bjniane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (lst == NULL || del == NULL)
		return ;
	current = *lst;
	while (current != NULL)
	{
		del(current->content);
		next = current->next;
		free(current);
		current = next;
	}
	*lst = NULL;
}

// #include <stdio.h>
// void	freecontent(void *content)
// {
// 	free(content);
// }
// int main()
// {
// 	t_list *h = ft_lstnew(NULL);
// 	t_list *h1 = ft_lstnew(NULL);
// 	t_list *h2 = ft_lstnew(NULL);
// 	 ft_lstclear(&h,freecontent);
// }