/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_selectf.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:48:39 by ydumaine          #+#    #+#             */
/*   Updated: 2022/04/01 18:05:04 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_select1(i_list **a, i_list **b, int i)
{
	if (i == 1)
	{
		ft_swap_list(a);
		ft_printf("sa\n");
	}
	if (i == 2)
	{
		ft_swap_list(b);
		ft_printf("sb\n");
	}
	if (i == 3)
	{
		ft_swap_list(a);
		ft_swap_list(b);
		ft_printf("ss\n");
	}
	if (i == 4)
	{
		ft_push_list(b, a);
		ft_printf("pa\n");
	}
}

void	ft_select2(i_list **a, i_list **b, int i)
{
	if (i == 5)
	{
		ft_push_list(a, b);
		ft_printf("pb\n");
	}
	if (i == 6)
	{
		ft_rotate_list(a);
		ft_printf("ra\n");
	}
	if (i == 7)
	{
		ft_rotate_list(b);
		ft_printf("rb\n");
	}
	if (i == 8)
	{
		ft_rotate_list(a);
		ft_rotate_list(b);
		ft_printf("rr\n");
	}
}


void	ft_select3(i_list **a, i_list **b, int i)
{
	if (i == 9)
	{
		ft_reverse_rotate_list(a);
		ft_printf("rra\n");
	}
	if (i == 10)
	{
		ft_reverse_rotate_list(b);
		ft_printf("rrb\n");
	}
	if (i == 11)
	{
		ft_reverse_rotate_list(a);
		ft_reverse_rotate_list(b);
		ft_printf("rrr\n");
	}
}
