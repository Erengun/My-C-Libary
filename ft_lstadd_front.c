/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egun <egun@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:34:59 by egun              #+#    #+#             */
/*   Updated: 2022/01/26 19:08:50 by egun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}
// void a(char *str)
// {
// 	printf("%s", str);
// }

// int main()
// {
// 	t_list *list;
	
// 	list = ft_lstnew("fatih\n");
// 	ft_lstadd_front(&list, ft_lstnew("eren\n"));
// 	ft_lstiter(list, (void *)a);
// 	ft_lstadd_back(&list, ft_lstnew("eren\n"));
// 	ft_lstiter(list, (void *)a);
// }
