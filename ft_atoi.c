/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:52:23 by rugoncal          #+#    #+#             */
/*   Updated: 2022/12/02 23:39:21 by rugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* convert a string to an integer */

int	ft_atoi(const char *str)
{
	char	*i;
	int		result;
	int		sign;

	i = (char *)str;
	result = 0;
	sign = 1;
	while ((*i == ' ') || (*i >= 9 && *i <= 13))
		i++;
	if (*i == '-' || *i == '+')
	{
		if (*i == '-')
			sign *= -1;
		i++;
	}
	while (*i && *i >= '0' && *i <= '9')
	{
		result = result * 10 + *i - '0';
		i++;
	}
	return (result * sign);
}
