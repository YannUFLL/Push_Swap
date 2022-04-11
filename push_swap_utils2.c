/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:49:38 by ydumaine          #+#    #+#             */
/*   Updated: 2022/04/11 16:38:58 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_li	*ft_lsti_new(int content)
{
	t_li	*ptr;

	ptr = malloc(sizeof(t_li));
	if (ptr == NULL)
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}

t_li	*ft_lsti_clear(t_li **a, t_li **b)
{
	t_li	*ptr;

	ptr = *a;
	while (ptr)
	{
		*a = ptr;
		ptr = ptr->next;
		free(*a);
	}
	*a = NULL;
	if (b != NULL)
	{
		ptr = *b;
		while (ptr)
		{
			*b = ptr;
			ptr = ptr->next;
			free(*b);
		}
		*b = NULL;
	}
	return (NULL);
}

void	ft_check_list(int *error, t_li *lst)
{
	t_li	*pos;

	pos = lst;
	while (pos->next && *error == 0)
	{
		if (pos->next == NULL)
			break ;
		while (lst->next)
		{
			lst = lst->next;
			if (pos->content == lst->content)
			{
				*error = 1;
				break ;
			}
		}
		if (*error == 0)
		{
			pos = pos->next;
			lst = pos;
		}
	}
}

t_li	*ft_argv_withspace(t_li **lst, int *error, char *argv, int *u)
{
	while (argv[*u] != '\0')
	{
		(*lst)->next = ft_lsti_new(ft_atoi2(argv, error, u));
		if ((*lst)->next == NULL || *error == 1)
			return (NULL);
		*lst = (*lst)->next;
	}
	*u = 0;
	return (*lst);
}

t_li	*ft_stack_filling(int argc, char **argv)
{
	int		i;
	int		u;
	int		error;
	t_li	*top;
	t_li	*lst;

	error = 0;
	i = 1;
	lst = NULL;
	u = 0;
	top = ft_lsti_new(ft_atoi2(argv[i], &error, &u));
	if (top == NULL)
		return (ft_lsti_clear(&top, NULL));
	lst = top;
	while (i < argc)
	{
		if (!ft_argv_withspace(&lst, &error, argv[i], &u) || error == 1)
			return (ft_lsti_clear(&top, NULL));
		i++;
	}
	ft_check_list(&error, top);
	if (error == 1)
		return (ft_lsti_clear(&top, NULL));
	return (top);
}
