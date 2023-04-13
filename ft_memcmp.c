/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 20:14:45 by rugoncal          #+#    #+#             */
/*   Updated: 2022/12/01 16:17:54 by rugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* compares the first n bytes of memory area str1 and memory area str2. */

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	size_t			i;
	int				res;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)b1;
	s2 = (unsigned char *)b2;
	i = 0;
	res = 0;
	while (i < len)
	{
		if (*s1 != *s2)
		{
			res = *s1 - *s2;
			break ;
		}
		i++;
		s1++;
		s2++;
	}	
	return (res);
}
