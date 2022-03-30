/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:44:41 by ydumaine          #+#    #+#             */
/*   Updated: 2022/03/30 17:45:48 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_list(i_list *a)
{
	int	tmp;

	if (a->next != NULL)
	{
		tmp = a->content;
		a->content = (a->next)->content;
		(a->next)->content =tmp;
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

void	ft_reverse_rotate_list(i_list **a)
{
	i_list *ptr;
	i_list *ptrnext;

	if (*a != NULL)
	{
		ptr = *a;
		ptrnext = (*a)->next;
		while (ptrnext->next)
		{
			ptr = ptr->next;
			ptrnext = ptrnext->next;
		}
		ptr->next = NULL;
		ptrnext->next = *a;
		*a = ptrnext;
	}
}

