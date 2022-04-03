/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:07:56 by ydumaine          #+#    #+#             */
/*   Updated: 2022/04/03 12:19:55 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "libftprintf.h"

typedef struct t_li
{
	int				content;
	struct t_li		*next;
}	t_li;

int		ft_atoi2(const char *str, int *error, int *u);
int		ft_printf(const char *str, ...);
void	ft_swap_list(t_li **a);
void	ft_push_list(t_li **a, t_li **b);
void	ft_rotate_list(t_li **a);
void	ft_reverse_rotate_list(t_li **a);
void	ft_select1(t_li **a, t_li **b, int i);
void	ft_select2(t_li **a, t_li **b, int i);
void	ft_select3(t_li **a, t_li **b, int i);
t_li	*ft_lsti_new(int content);
t_li	*ft_lsti_clear(t_li **a, t_li **b);
t_li	*ft_stack_filling(int argc, char **argv);

#endif 
