/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:07:56 by ydumaine          #+#    #+#             */
/*   Updated: 2022/03/30 17:53:16 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>

typedef struct i_list
{
	int				content;
	struct i_list	*next;
}	i_list;

int		ft_atoi2(const char *str, int *error);
int		ft_printf(const char *str, ...);
void	ft_swap_list(i_list *a);
void	ft_push_list(i_list **a, i_list **b);
void	ft_rotate_list(i_list **a);
void	ft_reverse_rotate_list(i_list **a);
void	ft_select1(i_list **a, i_list **b, int i, int *error);
void	ft_select2(i_list **a, i_list **b, int i, int *error);
void	ft_select3(i_list **a, i_list **b, int i, int *error);
i_list	*ft_lsti_new(int content);
i_list	*ft_lsti_clear(i_list **a, i_list **b);
i_list	*ft_stack_filling(int argc, char **argv);

#endif 
