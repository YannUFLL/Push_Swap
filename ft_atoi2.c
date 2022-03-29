/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:39:52 by ydumaine          #+#    #+#             */
/*   Updated: 2022/03/28 16:10:26 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_atoi2(const char *str, int *error)
{
	int	i;
	int	s;
	int	b;

	b = 0;
	i = 0;
	s = 0;
	
	if (str == NULL)
	{
		*error = 1;
		return (0);
	}
	if (str[i] == 45)
	{
			s = 1;
			i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		b = b * 10 - (str[i] - 48);
		i++;
	}
	if ((str[i] < 48  || str[i] > 57) && str[i] != '\0')
	{
		*error = 1;
		return(0);
	}
	if (s == 0)
		b = -b;
	return (b);
}

