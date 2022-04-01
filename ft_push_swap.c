/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 18:40:53 by ydumaine          #+#    #+#             */
/*   Updated: 2022/04/01 20:57:07 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
#include "printf.h"
#include "libft.h"

#define sa ft_select1(a, b, 1)
#define sb ft_select1(a, b, 2)
#define ss ft_select1(a, b, 3)
#define pa ft_select1(a, b, 4)
#define pb ft_select2(a, b, 5)
#define ra ft_select2(a, b, 6)
#define rb ft_select2(a, b, 7)
#define rr ft_select2(a, b, 8)
#define rra ft_select3(a, b, 9)
#define rrb ft_select3(a, b, 10)
#define rrr ft_select3(a, b, 11)

void	ft_print_list(i_list *a,i_list *b)
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

int	ft_check_lb(i_list *pos)
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

int	ft_check_la(i_list *pos)
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

int	ft_cmp_2f(i_list **pos)
{
	i_list *ptr;

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

int ft_cmp_fl(i_list **pos)
{
	i_list *ptr;

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

void ft_algo(i_list **a, i_list **b)
{
	int check; 
	int	temp; 

   	while (*a)	
	{
		if (ft_cmp_2f(a))
			sa;
		if (ft_cmp_fl(a))
			rra;
		pb;
		if (!(ft_cmp_2f(b)))
			sb;
		if (!(ft_cmp_fl(b)))
			rrb;
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
				rb;
				temp--;
			}
			temp = check;
			while (temp > 1)
			{
				rrb;
				temp--;
			}
		}
	pa;
	}
}



int	main(int argc, char **argv)
{
	i_list	*a;
	i_list	*b;
	a = NULL;
	b = NULL;
	if (argc > 1)
		a = ft_stack_filling(argc, argv);
	if (a == NULL)
	{
		return (0);
		ft_printf("Error");
	}
	ft_algo(&a, &b);
}
