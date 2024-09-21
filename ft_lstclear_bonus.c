/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yustinov <ev.ustinov03@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:20:46 by yustinov          #+#    #+#             */
/*   Updated: 2024/09/20 14:43:19 by yustinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;
	t_list	*next_node;

	if (*lst == NULL || lst == NULL)
		return ;
	head = *lst;
	while (head != NULL)
	{
		next_node = head->next;
		del(head->content);
		free(head);
		head = next_node;
	}
	*lst = NULL;
}
