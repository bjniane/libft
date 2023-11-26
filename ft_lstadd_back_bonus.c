/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjniane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:30:29 by bjniane           #+#    #+#             */
/*   Updated: 2023/11/18 15:36:17 by bjniane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// #include <stdio.h>
// int main ()
// {
// 	t_list	*lst = ft_lstnew("hello");
// 	ft_lstadd_back(&lst, ft_lstnew("bilal"));
// 	ft_lstadd_back(&lst, ft_lstnew("how"));
// 	ft_lstadd_back(&lst, ft_lstnew("are"));
// 	ft_lstadd_back(&lst, ft_lstnew("you"));
// 	t_list *current = lst;
// 	while (current)
// 	{
// 		printf("%s ", current->content);
// 		current = current->next;
// 	}
// }