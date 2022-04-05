/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:45:29 by ydumaine          #+#    #+#             */
/*   Updated: 2022/04/03 21:04:29 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_lb(t_li *pos)
{
	int first;
	int	i;

	i = 1;
	first = pos->content;
	if (pos->next == NULL)
		return (0);
	while(pos->next)
	{
		pos = pos->next; 
		if (pos->content > first)
			return (i);
		if (pos->next == NULL)
			return (0);
		i++;
	}
	return (0);
}

int	ft_check_la(t_li *pos)
{
	int previous;

	previous = pos->content;	
	if (pos->next == NULL)
		return (0);
	pos=pos->next;
	while(pos)
	{
		if (pos->content <	previous)
			return (1);
		else 
		{
			previous = pos->content;
			pos = pos->next; 
		}
	}
	return (0);
}

int	ft_count_int(t_li *pos)
{
	int	i;

	i = 1; 
	while (pos->next)
	{
		pos = pos->next;
		i++;
	}
	return (i);
}
