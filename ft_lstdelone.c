/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egun <egun@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:08:31 by egun              #+#    #+#             */
/*   Updated: 2022/01/25 17:46:11 by egun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	lst->content = NULL;
	lst->next = NULL;
	free(lst);
	lst = NULL;
}


void ft_putstr(void *content)
{
	char	*str;

	str = (char *)content;
	while (str && *str)
		write(1, str++, 1);
}
/*
void del(void *str)
{
	free(str);
}
int main()
{
	t_list *list;
	
	list = ft_lstnew(ft_strdup("yes\n"));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("no\n")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("evet\n")));
	write(1, "Before:\n", 8);
	ft_lstiter(list, ft_putstr);
	write(1, "\n\n", 2);
	ft_lstdelone(ft_lstlast(list),del);
	write(1, "After:\n", 7);
	ft_lstiter(list,ft_putstr);
}
*/