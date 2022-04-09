/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo_utils2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:54:52 by ydumaine          #+#    #+#             */
/*   Updated: 2022/04/09 14:58:59 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_backupb(t_li **b, t_li **a, int pos1, int pos2)
{
	if (pos1 > pos2)
	{
		while (pos2--)
			ft_select3(a, b, 10);
	}
	else
	{
		while (pos1--)
			ft_select2(a, b, 7);
	}
}

void	ft_backupa(t_li **b, t_li **a, int pos1, int pos2)
{
	if (pos1 > pos2)
	{
		while (pos2--)
			ft_select3(a, b, 9);
	}
	else
	{
		while (pos1--)
			ft_select2(a, b, 6);
	}
}

int	ft_detect_smaller2(t_li *a)
{
	int	value;

	value = 2147483647;
	while (a)
	{
		if (a->content < value)
		{
			value = a->content;
		}
		a = a->next;
	}
	return (value);
}
