/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_cmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:43:45 by ydumaine          #+#    #+#             */
/*   Updated: 2022/04/03 18:40:16 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_cmp_2f(t_li **pos)
{
	t_li *ptr;

	if ((*pos)->next != NULL)
	{
		ptr = (*pos)->next;
		if (ptr->content < (*pos)->content)
		{
			return (1);
		}
		else 
			return (0);
	}
	return (0);
}

int ft_cmp_fl(t_li **pos)
{
	t_li *ptr;

	ptr = NULL;
	if (*pos != NULL && (*pos)->next != NULL)
	{
			ptr = *pos;
		while (ptr->next)
			ptr = ptr->next;
		if (ptr->content < (*pos)->content)
			return (1);
		else 
			return (0);
	}
	return (0);
}

int ft_cmp_sl(t_li **pos)
{
	t_li *ptr;
	t_li *ptr2;

	ptr = NULL;
	ptr2 = (*pos)->next;
	if (*pos != NULL && (*pos)->next != NULL)
	{
			ptr = ptr2;
		while (ptr->next)
			ptr = ptr->next;
		if (ptr->content < ptr2->content)
			return (1);
		else 
			return (0);
	}
	return (0);
}
