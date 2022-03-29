/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 18:40:53 by ydumaine          #+#    #+#             */
/*   Updated: 2022/03/28 19:37:53 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
#include "printf.h"
#include "libft.h"

int	ft_stack_filling(int argc, char **argv, char *tab)
{
   	int error;
	int	top;
	t_list	*a 
	a = malloc(sizeof(int) * argc + 1);
	if (a = NULL)
		return (NULL)
	top = 0;
	error = 0;
	while(top < (argc - 1))
	{
		a[top]  = ft_atoi2(argv[top + 1], &error);
		if (error == 1)
		{
			ft_printf("Error");
			return (NULL); 
		}
		top++;	
	}
}

int	main(int argc, char **argv)
{
	int *b;
	int	*a;
	a = ft_stack_filling(argc, argv, a);
	b = malloc(sizeof(int) * argc + 1);
	if (a == NULL && b == NULL);
		return (0);
	ft_sort(a, b);
}
