/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjniane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:00:41 by bjniane           #+#    #+#             */
/*   Updated: 2023/11/18 15:04:48 by bjniane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

// #include <stdio.h>
// int main()
// {
// 	int x=2;
// 	int y=3;
// 	int k=5;

// 	t_list *h = ft_lstnew(&x);
// 	t_list *h1 = ft_lstnew(&y);
// 	t_list *h2 = ft_lstnew(&k);

// 	h->next = h1;
// 	h1->next = h2;
// 	h2->next = NULL;
// 	printf("%d",ft_lstsize(h));
// }