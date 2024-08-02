/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaskal <aaskal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:32:11 by aaskal            #+#    #+#             */
/*   Updated: 2023/12/24 12:17:06 by aaskal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
	else
		return ;
}
// void	del(void *content)
// {
// 	free(content);
// }

// int main()
// {
//        t_list *lst;
//     t_list *new;
//     t_list *new2;
//     t_list *new3;
//     t_list *last;

//     lst = ft_lstnew("A");
//     new = ft_lstnew("B");
//     new2 = ft_lstnew("C");
//     new3 = ft_lstnew("D");
//     ft_lstadd_front(&lst,new);
//     ft_lstadd_front(&lst,new2);
//     ft_lstadd_front(&lst,new3);

//     printf(" before delone : \n");
//     while(lst)
//     {
//         printf("%s\n",lst->content);
//         lst = lst->next;
//     }

//     printf(" after delone : \n");
//     while(lst)
//     {
//         ft_lstdelone(lst,del);
//          printf("%s\n",lst->content);
//     }

//     printf("%s\n",new->content);
//      printf("%s\n",new2->content);
//       printf("%s\n",new3->content);
//     return (0);
// }