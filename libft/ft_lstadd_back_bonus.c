/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaskal <aaskal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:29:00 by aaskal            #+#    #+#             */
/*   Updated: 2023/12/24 12:24:51 by aaskal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (new == NULL || lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}
// int main(void)
// {
//     t_list *lst;
//     t_list *new;
//     t_list *new2;
//     t_list *new3;
//     lst = ft_lstnew("A");
//     new = ft_lstnew("B");
//     new2 = ft_lstnew("C");
//     new3 = ft_lstnew("D");
//     ft_lstadd_back(&lst,new);
//     ft_lstadd_back(&lst,new2);
//     ft_lstadd_back(&lst,new3);
//     while(lst != NULL)
//     {
//         printf("%s \t",lst->content);
//         lst = lst->next;
//     }

// }
