/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaskal <aaskal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 15:07:57 by aaskal            #+#    #+#             */
/*   Updated: 2023/12/24 12:54:08 by aaskal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;
	void	*p;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		p = f(lst->content);
		tmp = ft_lstnew(p);
		if (!tmp)
		{
			del(p);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}

// void	del(void *content)
// {
// 	free(content);
// }

// void *f(void *content)
// {
//     char *str = (char *)content;
//     char *new_str = malloc(strlen(str) + 1);
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         new_str[i] = str[i] + 1;
//     }
//     new_str[strlen(str)] = '\0';
//     return (new_str);
// }
// int main()
// {
//     t_list *lst;
//     t_list *new;
//     t_list *new2;
//     t_list *new3;
//     t_list *tmp;
//     t_list *start;

//     lst = ft_lstnew("A");
//     new = ft_lstnew("B");
//     new2 = ft_lstnew("C");
//     new3 = ft_lstnew("D");
//     ft_lstadd_front(&lst,new);
//     ft_lstadd_front(&lst,new2);
//     ft_lstadd_front(&lst,new3);

//     start = lst;

//     printf(" before : \n");
//     while(lst)
//     {
//         printf("%s\n",lst->content);
//         lst = lst->next;
//     }

//     printf(" after  : \n");

//     tmp = ft_lstmap(start, f, del);
//     while (tmp)
//     {
//         printf("%s\n", tmp->content);
//         tmp = tmp->next;
//     }

//     return (0);
// }