/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 18:40:53 by ydumaine          #+#    #+#             */
/*   Updated: 2022/03/30 20:46:05 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
#include "printf.h"
#include "libft.h"

#define sa; "ft_select1(&a, &b, 1, error);"
#define sb; "ft_select1(&a, &b, 2, error);"
#define ss; "ft_select1(&a, &b, 3, error);"
#define pa; "ft_select1(&a, &b, 4, error);"
#define pb; "ft_select2(&a, &b, 5, error);"
#define ra; "ft_select2(&a, &b, 6, error);"
#define rb; "ft_select2(&a, &b, 7, error);"
#define rr; "ft_select2(&a, &b, 8, error);"
#define rra; "ft_select3(&a, &b, 9, error);"
#define rrb; "ft_select3(&a, &b, 10, error);"
#define rrr; "ft_select3(&a, &b, 11, error);"
#define pos; "pos->content;"
#define pos++; "pos = pos->next;"

void ft_algo(i_list **a, i_list **b)
{
	i_list *pos; 
	while ((*a)->content0)
		if (())
}

void	ft_rotate_list(i_list **a)
{
	i_list *ptr;

	if (*a != NULL)
	{
		ptr = *a;
		while (ptr->next)
		{
			ptr = ptr->next;
		}
		ptr->next = *a;
		(*a) = (*a)->next;
		ptr = ptr->next;
		ptr->next = NULL;
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
	ft_rotate_list(&a);
	while (a)
	{
		ft_printf("valeur a :%d \n  ", a->content);
		a = a->next;
	}
	while (b)
	{
		ft_printf("valeur b :%d \n  ", b->content);
		b = b->next;
	}
}
