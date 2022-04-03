/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:39:52 by ydumaine          #+#    #+#             */
/*   Updated: 2022/04/03 11:54:07 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_convert(const char *str, int *error, int *u)
{
	int	b;
	int	i;

	i = *u;
	b = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		b = b * 10 - (str[i] - 48);
		i++;
	}
	if ((str[i] < 48 || str[i] > 57) && str[i] != '\0' && str[i] != 32)
	{
		*error = 1;
		return (0);
	}
	*u = i;
	return (b);
}

int	ft_atoi2(const char *str, int *error, int *u)
{
	int	i;
	int	s;
	int	b;

	s = 0;
	i = *u;
	if (str == NULL)
	{
		*error = 1;
		return (0);
	}
	while (str[i] == ' ')
		i++;
	if (str[i] == 45)
	{
			s = 1;
			i++;
	}
	b = ft_convert(str, error, &i);
	if (s == 0)
		b = -b;
	while (str[i] == ' ')
		i++;
	*u = i;
	return (b);
}
