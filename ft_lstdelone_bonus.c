/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjniane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:45:26 by bjniane           #+#    #+#             */
/*   Updated: 2023/11/18 15:48:03 by bjniane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

// #include <stdio.h>

// void	free_content(void *content)
// {
// 	free(content);
// }
// int main()
// {
// 	int *i = malloc(sizeof(int));
// 	*i = 13;
// 	t_list *h = ft_lstnew(i);
// 	ft_lstdelone(h, free_content);
// }