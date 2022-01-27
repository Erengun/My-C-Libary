/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egun <egun@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:19:32 by egun              #+#    #+#             */
/*   Updated: 2022/01/26 13:46:27 by egun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;

	while (*lst)
	{
		list = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = list;
	}
}

// void a(char *str1)
// {
// 	printf("%s",str1);
// }

// void del(char *str)
// {
// 	free(str);
// }

// int	main()
// {
// 	t_list *list;

// 	list = ft_lstnew(ft_strdup("abi\n"));
// 	ft_lstadd_back(&list,ft_lstnew(ft_strdup("yapma\n")));
// 	ft_lstadd_back(&list,ft_lstnew(ft_strdup("atma şu izmaritini\n")));
// 	ft_lstadd_back(&list,ft_lstnew(ft_strdup("denize\n")));
// 	ft_lstiter(list,(void *)a);
// 	printf("Sus lan \n");
// 	ft_lstclear(&list, (void *)del);
// 	ft_lstiter(list,(void *)a);
// }
