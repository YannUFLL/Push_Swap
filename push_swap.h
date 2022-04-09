/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:07:56 by ydumaine          #+#    #+#             */
/*   Updated: 2022/04/09 13:48:47 by ydumaine         ###   ########.fr       */
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
int		ft_cmp_fl(t_li **pos);
int		ft_cmp_sl(t_li **pos);
int		ft_cmp_ab(t_li **a, t_li **b);
int		ft_check_lb(t_li *pos);
int		ft_check_la(t_li *pos);
int		ft_count_int(t_li *pos);
void	ft_print_list(t_li *a, t_li *b);
t_li	*ft_delete_list(t_li **li, int pos);
void	ft_putontopa(t_li **a, t_li **b, int max);
int		ft_detect_maxb(t_li *b);
int		ft_detect_maxa(t_li *a, int chunk);
void	ft_putontopb(t_li **b, t_li **a, int max);
void	ft_sort3(t_li **a, t_li **b);
void	ft_sort5(t_li **a, t_li **b);
void	ft_sortall(t_li **a, t_li **b, int chunk);
void	ft_algo(t_li **a, t_li **b);
int		ft_detect_smaller(t_li *a, int ex_value, int value);
void	ft_backupa(t_li **b, t_li **a, int pos1, int pos2);
void	ft_backupb(t_li **b, t_li **a, int pos1, int pos2);
int		ft_detect_smaller2(t_li *a);

#endif 
