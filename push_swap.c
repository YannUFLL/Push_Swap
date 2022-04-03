/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 18:40:53 by ydumaine          #+#    #+#             */
/*   Updated: 2022/04/03 12:19:29 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#define SA ft_select1(a, b, 1)
#define SB ft_select1(a, b, 2)
#define SS ft_select1(a, b, 3)
#define PA ft_select1(a, b, 4)
#define PB ft_select2(a, b, 5)
#define RA ft_select2(a, b, 6)
#define RB ft_select2(a, b, 7)
#define RR ft_select2(a, b, 8)
#define RRA ft_select3(a, b, 9)
#define RRB ft_select3(a, b, 10)
#define RRR ft_select3(a, b, 11)

void	ft_print_list(t_li *a,t_li *b)
{
	ft_printf("_ _ _ _ _ _ _ _ _ _ _\n");
	ft_printf("LISTE A :\n");
	while (a)
	{
		ft_printf("valeur a :%d \n  ", a->content);
		a = a->next;
	}
	ft_printf("LISTE B :\n");
	while (b)
	{
		ft_printf("valeur b :%d \n  ", b->content);
		b = b->next;
	}
	ft_printf("_ _ _ _ _ _ _ _ _ _ _\n");
}

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
	while(pos->next)
	{
		if (pos->next == NULL)
			return (0);
		else if (pos->content <	previous)
			return (1);
		else 
		{
			previous = pos->content;
			pos = pos->next; 
		}
	}
	return (0);
}

int	ft_cmp_2f(t_li **pos)
{
	t_li *ptr;

	if ((*pos)->next != NULL)
	{
		ptr = (*pos)->next;
		if (ptr->content > (*pos)->content)
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

void ft_algo(t_li **a, t_li **b)
{
	int check; 
	int	temp; 

   	while (*a)	
	{
		if (ft_cmp_2f(a))
			SA;
		if (ft_cmp_fl(a))
			RRA;
			PB;
		if (!(ft_cmp_2f(b)))
			SB;
		if (!(ft_cmp_fl(b)))
			RRB;
	}
	while (*b)
	{
		check = 1;
		while (check)
		{
			check = ft_check_lb(*b);
			temp = check;
			while (temp > 0)
			{
				RB;
				temp--;
			}
			temp = check;
			while (temp > 1)
			{
				RRB;
				temp--;
			}
		}
	PA;
	}
}
#include <stdio.h>
int	main(int argc, char **argv)
{
	t_li	*a;
	t_li	*b;
	a = NULL;
	b = NULL;
	if (argc > 1)
		a = ft_stack_filling(argc, argv);
	if (a == NULL)
	{
		ft_printf("Error");
		return (0);
	}
	ft_algo(&a, &b);
}
