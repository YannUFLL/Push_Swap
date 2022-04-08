/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 18:40:53 by ydumaine          #+#    #+#             */
/*   Updated: 2022/04/08 16:16:02 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
