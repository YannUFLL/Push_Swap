/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 18:40:53 by ydumaine          #+#    #+#             */
/*   Updated: 2022/04/05 19:38:27 by ydumaine         ###   ########.fr       */
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

void	ft_print_list(t_li *a, t_li *b)
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

void ft_sort3(t_li **a, t_li **b)
{
	if (ft_cmp_2f(a))
	{
		if (ft_cmp_fl(a))
		{
			if (ft_cmp_sl(a))
			{
				SA;
				RRA;
			}
			else
				RA;
		}
		else 
			SA;
	}
	else if (ft_cmp_sl(a))
	{
		SA;
		RA;
	}
	else 
		RRA;
}

void ft_sort5(t_li **a, t_li **b)
{
	PB;
	PB;
	if(ft_check_la(*a))
		ft_sort3(a, b);
	if (!ft_cmp_2f(b))
			RB;
	PA;
	if (ft_cmp_fl(a))
		RA;
	PA;
}

void ft_algo(t_li **a, t_li **b)
{
	//int check; 
	//int	temp; 
	int size; 
	
	size = ft_count_int(*a);
	if (size < 4 && ft_check_la(*a))
		ft_sort3(a, b);
	if (size < 6 && ft_check_la(*a))
		ft_sort5(a, b);
	else 

	int max ;
		
		max = ft_detect_smaller(a, 20);
		while (i < 20);
		{
			ft_putontop(a, max);
			pb; 
		}
		

}

void	ft_sortb(t_li *b)
{
}


int	ft_detect_smaller(t_li *a, int chunk)
{
	int ex_value; 
	t_li *top;
	int i; 
	int	*tab;
	int	max; 

	i = 0;
	top = a;
	ex_value = -2147483648;
	while (i < chunk)
	{
		while(a)
			{
					if (a->content < value && a->content > ex_value)
				{
						ex_value = value;
						value = a->content;
				}
				 a = a->next;
			}
		i++;
	}
	max = value; 
	return (max);
}
ft_putontopb(t_li *b, max)
{
	int pos1;
	int pos2;

	pos1 = 0;
	pos2 = 0; 
	while (pos1 < (ft_count_int(*b) / 2))
	{
	   if (a->content < max)	
		   break;  
		pos1++;
		b = b->next;
	}
	while (b)
	{
	   if (b->content < max)	
		   break;  
		pos2++;
		b = b->next;
	}
	b = top;
	if (pos1 > pos2)
	{
		while (pos1)
			rb;
	}
	else 
	{
		while (pos2)
			rrb;
	}
}

ft_putontopa(t_li *a, max)
{
	int pos1;
	int pos2;

	pos1 = 0;
	pos2 = 0; 
	while (pos1 < (ft_count_int(*a) / 2))
	{
	   if (a->content < max)	
		   break;  
		pos1++;
		a = a->next;
	}
	while (a)
	{
	   if (a->content < max)	
		   break;  
		pos2++;
		a = a->next;
	}
	a = top;
	if (pos1 > pos2)
	{
		while (pos1)
			ra;
	}
	else 
	{
		while (pos2)
			rra;
	}
}

int	*ft_chunkdetector(t_li *a, int chunk)
{
	int *ptr;
	int	value;
	int i;
	int	max;
	int	b;

	i = 0;
	b = ft_count_int(a);
	ptr = malloc(sizeof(int) * (ft_count_int(a) / chunk) + 2);
	value = -2147483648;
	max = ft_search_highest(a, -2147483648, ft_count_int(a));
	while (value != max)
	{
		value = ft_search_highest(a, value, chunk);
		ptr[i] = value; 
		i++;
	}
	return (ptr);
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
	//ft_algo(&a, &b);
	ft_chunkdetector(a, 20);
	ft_print_list(a, b);
}
