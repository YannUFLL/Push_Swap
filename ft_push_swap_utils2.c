/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_utils2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:49:38 by ydumaine          #+#    #+#             */
/*   Updated: 2022/04/01 20:57:59 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

i_list	*ft_lsti_new(int content)
{
	i_list	*ptr;

	ptr = malloc(sizeof(i_list));
	if (ptr == NULL)
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}

i_list	*ft_lsti_clear(i_list **a, i_list **b)
{
	i_list	*ptr;

	ft_printf("Error");
	ptr = *a;
	while (ptr)
	{
		*a = ptr;
		ptr = ptr->next;
		free(*a);
	}
	*a = NULL;
	if ( b != NULL)
	{
		ptr = *b;
		while (ptr)
		{
			*b = ptr;
			ptr = ptr->next;
			free(*b);
		}
		*b = NULL;
	}
	return (NULL);
}

void	ft_check_list(int *error, i_list *lst)
{
	i_list *pos;

	pos = lst;
	while (pos->next && *error == 0)
	{
		if (pos->next == NULL)
			break;
		while(lst->next)
		{	
			lst = lst->next;
			if (pos->content == lst->content)
			{
				*error = 1; 
				break;
			}
		}
		if (*error == 0)
		{
			pos = pos->next;
			lst = pos;
		}
	}
}

i_list	*ft_stack_filling(int argc, char **argv)
{
	int	i;
	int error;
	i_list *top;
	i_list *lst;

	error = 0;
	i = 1;
	lst = NULL;
	top = ft_lsti_new(ft_atoi2(argv[i++], &error));
	if (top == NULL)
		return (ft_lsti_clear(&top, NULL));
	lst = top;
	while(i < argc)
	{
		lst->next = ft_lsti_new(ft_atoi2(argv[i], &error));
		if (lst->next == NULL || error == 1)
			return (ft_lsti_clear(&top, NULL));
		lst = lst->next;
		i++;
	}
	ft_check_list(&error, top);
	if (error == 1)
		return (ft_lsti_clear(&top, NULL));
	return (top);
}