/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:44:41 by ydumaine          #+#    #+#             */
/*   Updated: 2022/04/05 19:38:30 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_list(t_li **a)
{
	t_li	*tmp;
	t_li	*tmp2;

	if ((*a)->next != NULL)
	{
		tmp = ((*a)->next)->next;
		tmp2 = (*a)->next;
		((*a)->next)->next = *a;
		(*a)->next = tmp;
		*a = tmp2;
	}
}

void	ft_push_list(t_li **a, t_li **b)
{
	t_li	*ptr;

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

void	ft_rotate_list(t_li **a)
{
	t_li	*ptr;

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

void	ft_reverse_rotate_list(t_li **a)
{
	t_li	*ptr;
	t_li	*ptrnext;

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

int	ft_detect_smaller(
