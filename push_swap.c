/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 18:40:53 by ydumaine          #+#    #+#             */
/*   Updated: 2022/04/07 22:36:36 by ydumaine         ###   ########.fr       */
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
	if (ft_cmp_ab(a, b))
		PA;
	else if (ft_cmp_ab(&((*a)->next)->next, b))
		RRA;
	if (ft_cmp_fl(a))
		RA;
	PA;
}

void	ft_putontopa(t_li **a, t_li **b, int max)
{
	int pos1;
	int pos2;
	t_li *top; 

	top = *a;
	pos1 = 0;
	pos2 = 0; 
	while (top)
	{
	   if (top->content < max)	
		   break;  
		pos1++;
		top = top->next;
	}
	while (top)
	{
		pos2++;
		top = top->next;
	}
	top = *a;
	if (pos1 > pos2)
	{
		while (pos2--)
			RRA;
	}
	else 
	{
		while (pos1--)
			RA;
	}
}
int	ft_detect_maxb(t_li *b)
{
	int	value;
	
	value = -2147483648;
	while(b)
		{
				if (b->content > value)
			{
					value = b->content;
			}
			 b = b->next;
		}
	return (value);
}


int	ft_detect_maxa(t_li *a, int chunk)
{
	int ex_value; 
	t_li *top;
	int i; 
	int	max;
   	int value;	

	i = 0;
	top = a;
	value = a->content;
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
		a = top; 
		ex_value = value;
		while (a)
		{
			if (a->content > value)
			{
				value = a->content;
				break;
			}
			a = a->next;
		}
		a = top;
		i++;
	}
	max = value; 
	return (max);
}

void ft_putontopb(t_li **b, t_li **a, int max)
{
	int pos1;
	int pos2;
	int c;
	t_li *top;

	c = 0;
	top = *b;
	pos1 = 0;
	pos2 = 0; 
	while (top)
	{
	   if (top->content == max)	
		   break;  
		pos1++;
		top = top->next;
	}
	while (top)
	{
		pos2++;
		top = top->next;
	}
	top = *b;
	if (pos1 > pos2)
	{
		while (pos2--)
			RRB;
	}
	else 
	{
		while (pos1--)
			RB;
	}
}

void ft_algo(t_li **a, t_li **b)
{
	int size; 
	int max ;
	int i;
	
	size = ft_count_int(*a);
	if (size < 4 && ft_check_la(*a))
		ft_sort3(a, b);
	if (size < 6 && ft_check_la(*a))
		ft_sort5(a, b);
	else if(ft_check_la(*a))
	{	
		while (*a)
		{
			max = ft_detect_maxa(*a, 5);
			i = 0;
			while (i < 5 && *a)
			{
				ft_putontopa(a, b, max);
				PB;
				i++;
			}
		}
		while (*b)
		{
			max = ft_detect_maxb(*b);
			ft_putontopb(b, a, max);
			PA; 
		}
	}
}


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
	//ft_print_list(a, b);
}
