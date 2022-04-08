/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:51:59 by ydumaine          #+#    #+#             */
/*   Updated: 2022/04/08 16:19:41 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort3(t_li **a, t_li **b)
{
	if (ft_cmp_2f(a))
	{
		if (ft_cmp_fl(a))
		{
			if (ft_cmp_sl(a))
			{
				ft_select1(a, b, 1);
				ft_select3(a, b, 9);
			}
			else
				ft_select2(a, b, 6);
		}
		else
			ft_select1(a, b, 1);
	}
	else if (ft_cmp_sl(a))
	{
		ft_select1(a, b, 1);
		ft_select2(a, b, 6);
	}
	else
		ft_select3(a, b, 9);
}

void	ft_sort5(t_li **a, t_li **b)
{
	ft_select2(a, b, 5);
	ft_select2(a, b, 5);
	if (ft_check_la(*a))
		ft_sort3(a, b);
	if (ft_cmp_ab(a, b))
		ft_select1(a, b, 4);
	else if (ft_cmp_ab(&((*a)->next)->next, b))
		ft_select3(a, b, 9);
	if (ft_cmp_fl(a))
		ft_select2(a, b, 6);
	ft_select1(a, b, 4);
}

void	ft_sortall(t_li **a, t_li **b, int chunk)
{
	int	max;
	int	i;

	while (*a)
	{
		max = ft_detect_maxa(*a, chunk);
		i = 0;
		while (i < chunk && *a)
		{
			ft_putontopa(a, b, max);
			ft_select2(a, b, 5);
			i++;
		}
	}
	while (*b)
	{
		max = ft_detect_maxb(*b);
		ft_putontopb(b, a, max);
		ft_select1(a, b, 4);
	}
}

void	ft_algo(t_li **a, t_li **b)
{
	int	size;

	size = ft_count_int(*a);
	if (size < 4 && ft_check_la(*a))
		ft_sort3(a, b);
	if (size < 6 && ft_check_la(*a))
		ft_sort5(a, b);
	else if (ft_check_la(*a) && size < 200)
		ft_sortall(a, b, 28);
	else if (ft_check_la(*a) && size >= 200 && size <= 400)
		ft_sortall(a, b, 43);
	else if (ft_check_la(*a) && size > 400)
		ft_sortall(a, b, 53);
}
