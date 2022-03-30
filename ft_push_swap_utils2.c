/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_utils2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:49:38 by ydumaine          #+#    #+#             */
/*   Updated: 2022/03/30 17:51:38 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

i_list	*ft_lsti_clear(i_list **a, i_list **b)
{
	i_list	*ptr;

	ft_printf("Error");
	ptr = *a;
	while (ptr)
	{
		*a = ptr;
		ptr = ptr->next;
		free(*a);
	}
	*a = NULL;
	ptr = *b
	while (ptr)
	{
		*b = ptr;
		ptr = ptr->next;
		free(*b);
	}
	*b = NULL;
	return (NULL);
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
		return (ft_lsti_clear(&top, NULL));
	while(i < argc)
	{
		lst->next = ft_lsti_new(ft_atoi2(argv[i], &error));
		if (lst->next == NULL || error == 1)
			return (ft_lsti_clear(&top, NULL));
		lst = lst->next;
		i++;
	}
	return (top);
}
