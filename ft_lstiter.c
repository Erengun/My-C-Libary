/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egun <egun@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:24:39 by egun              #+#    #+#             */
/*   Updated: 2022/01/25 16:42:23 by egun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f (lst -> content);
		lst = lst -> next;
	}
}
/*
void ft_putstr(char *str)
{
	while(*str)
	write(1, str++, 1);
}
int main ()

{
	t_list *a;
	a = NULL;
	ft_lstadd_back(&a, ft_lstnew("hello "));
	ft_lstadd_back(&a, ft_lstnew("world"));
	ft_lstiter(a, (void (*)(void *))ft_putstr);
}*/