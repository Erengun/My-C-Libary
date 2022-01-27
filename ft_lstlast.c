/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egun <egun@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:45:07 by egun              #+#    #+#             */
/*   Updated: 2022/01/26 13:02:16 by egun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}

// int main ()
// {
// 	t_list *son;
	
// 	son = ft_lstnew("Iam");
// 	ft_lstadd_back(&son,ft_lstnew("fatih"));
// 	ft_lstadd_back(&son,ft_lstnew("gay"));
// 	son = ft_lstlast(son);
// 	printf("%s", son->content);
// }