/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:07:56 by ydumaine          #+#    #+#             */
/*   Updated: 2022/04/07 21:34:55 by ydumaine         ###   ########.fr       */
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
int		ft_cmp_2f(t_li **pos);
int 	ft_cmp_fl(t_li **pos);
int 	ft_cmp_sl(t_li **pos);
int		ft_cmp_ab(t_li **a, t_li **b);
int		ft_check_lb(t_li *pos);
int		ft_check_la(t_li *pos);
int		ft_count_int(t_li *pos);
void	ft_print_list(t_li *a, t_li *b);
t_li	*ft_delete_list(t_li **li, int pos);


#endif 
