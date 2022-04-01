/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:44:41 by ydumaine          #+#    #+#             */
/*   Updated: 2022/04/01 18:05:38 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_swap_list(i_list **a)
{
	i_list	*tmp;
	i_list 	*tmp2;

	if ((*a)->next != NULL)
	{
		tmp = ((*a)->next)->next;
		tmp2 = (*a)->next;
		((*a)->next)->next = *a;
		(*a)->next = tmp;
		*a = tmp2; 

	}
}

void	ft_push_list(i_list **a, i_list **b)
{
	i_list *ptr;

	if (*b == NULL)
	{
		ptr = *a;
		*b = ft_lsti_new((*a)->content);
		*a = (*a)->next;
		ptr = NULL;
		free(ptr);
	}
	else 
	{
		ptr = *b;
		*b = ft_lsti_new((*a)->content);
		(*b)->next = ptr;
		ptr = *a;
		*a = (*a)->next;
		ptr = NULL;
		free(ptr);
	}	
}

void	ft_rotate_list(i_list **a)
{
	i_list *ptr;

	if (*a != NULL)
	{
		ptr = *a;
		while (ptr->next)
		{
			ptr = ptr->next;
		}
		ptr->next = *a;
		(*a) = (*a)->next;
		ptr = ptr->next;
		ptr->next = NULL;
	}
}

void	ft_reverse_rotate_list(i_list **a)
{
	i_list *ptr;
	i_list *ptrnext;

	if (*a != NULL && (*a)->next != NULL)
	{
		ptr = *a;
		ptrnext = (*a)->next;
		while (ptrnext->next)
		{
			ptr = ptr->next;
			ptrnext = ptrnext->next;
		}
		ptr->next = NULL;
		ptrnext->next = *a;
		*a = ptrnext;
	}
}

