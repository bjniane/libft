/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiteri_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjniane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:32:07 by bjniane           #+#    #+#             */
/*   Updated: 2023/11/18 17:37:19 by bjniane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (lst == NULL || f == NULL)
		return ;
	current = lst;
	while (current)
	{
		f(current->content);
		current = current->next;
	}
}

// #include <stdio.h>
// void	print_content(void *content)
// {
// 	printf("%d\n", *(int *)content);
// }
// int main()
// {
// 	int c = 9;
// 	int b = 4;
// 	int k = 6;

// 	t_list *h = ft_lstnew(&c);
// 	t_list *h1 = ft_lstnew(&b);
// 	t_list *h2 = ft_lstnew(&k);

// 	h->next = h1;
// 	h1->next = h2;
// 	h2->next = NULL;

// 	ft_lstiter(h, print_content);
// }