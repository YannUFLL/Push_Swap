/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 18:40:53 by ydumaine          #+#    #+#             */
/*   Updated: 2022/03/30 12:00:16 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
#include "printf.h"
#include "libft.h"

i_list	*ft_lsti_new(int content)
{
	i_list	*ptr;

	ptr = malloc(sizeof(i_list));
	if (ptr == NULL)
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}

i_list	*ft_lsti_clear(i_list **lst)
{
	i_list	*ptr;

	ft_printf("Error");
	ptr = *lst;
	while (ptr)
	{
		*lst = ptr;
		ptr = ptr->next;
		free(*lst);
	}
	*lst = NULL;
	return (NULL);
}

void	ft_swap_list(i_list *lst)
{
	int	tmp;

	if (lst->next != NULL)
	{
		tmp = lst->content;
		lst->content = (lst->next)->content;
		(lst->next)->content =tmp;
	}
}	


void	ft_push_list(i_list **a, i_list **b)
{
	i_list *ptr;

	if (*b == NULL)
	{
		ptr = *a;
		*b = ft_lsti_new((*a)->content);
		*a = (*a)->next;
		free(ptr);
	}
	else 
	{
		ptr = *b;
		*b = ft_lsti_new((*a)->content);
		(*b)->next = ptr;
		ptr = *a;
		*a = (*a)->next;
		free(ptr);
	}	
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



i_list	*ft_stack_filling(int argc, char **argv)
{
	int	i;
	int error; 
	i_list *top;
	i_list *lst;
  		
	error = 0;
	i = 1;
	lst = NULL; 
	top = ft_lsti_new(ft_atoi2(argv[i++], &error));
	lst = top;
	if (top == NULL)
		return (ft_lsti_clear(&top));
	while(i < argc)
	{
		lst->next = ft_lsti_new(ft_atoi2(argv[i], &error));
		if (lst->next == NULL || error == 1)
			return (ft_lsti_clear(&top));
		lst = lst->next;
		i++;
	}
	return (top);
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
