/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaepark <chaepark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:29:08 by chaepark          #+#    #+#             */
/*   Updated: 2021/11/11 17:21:36 by chaepark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lst_tmp;
	t_list	*tmp;

	lst_tmp = (*lst)->next;
	while (lst_tmp)
	{
		del(lst_tmp->content);
		tmp = lst_tmp->next;
		free(lst_tmp);
		lst_tmp = tmp;
	}
	ft_lstdelone(*lst, del);
	*lst = 0;
}
