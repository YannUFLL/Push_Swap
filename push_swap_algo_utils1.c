/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo_utils1.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:57:02 by ydumaine          #+#    #+#             */
/*   Updated: 2022/04/08 16:25:05 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putontopa(t_li **a, t_li **b, int max)
{
	int		pos1;
	int		pos2;
	t_li	*top;

	top = *a;
	pos1 = 0;
	pos2 = 0;
	while (top)
	{
		if (top->content < max)
			break ;
		pos1++;
		top = top->next;
	}
	while (top)
	{
		if (top->content < max)
			pos2 = 0;
		pos2++;
		top = top->next;
	}
	top = *a;
	ft_backupa(b, a, pos1, pos2);
}

int	ft_detect_maxb(t_li *b)
{
	int	value;

	value = -2147483648;
	while (b)
	{
		if (b->content > value)
		{
			value = b->content;
		}
		b = b->next;
	}
	return (value);
}

int	ft_detect_smaller(t_li *a, int ex_value, int value)
{
	while (a)
	{
		if (a->content < value && a->content > ex_value)
		{
			value = a->content;
		}
		a = a->next;
	}
	return (value);
}

int	ft_detect_maxa(t_li *a, int chunk)
{
	int		ex_value;
	t_li	*top;
	int		i;
	int		value;

	i = 0;
	top = a;
	value = a->content;
	ex_value = -2147483648;
	while (i < chunk)
	{
		value = ft_detect_smaller(a, ex_value, value);
		ex_value = value;
		while (a && i < (chunk - 1))
		{
			if (a->content > value)
				value = a->content;
			a = a->next;
		}
		a = top;
		i++;
	}
	return (value);
}

void	ft_putontopb(t_li **b, t_li **a, int max)
{
	int		pos1;
	int		pos2;
	t_li	*top;

	top = *b;
	pos1 = 0;
	pos2 = 0;
	while (top)
	{
		if (top->content == max)
			break ;
		pos1++;
		top = top->next;
	}
	while (top)
	{
		pos2++;
		top = top->next;
	}
	top = *b;
	ft_backupb(b, a, pos1, pos2);
}
