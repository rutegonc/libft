/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 20:13:32 by rugoncal          #+#    #+#             */
/*   Updated: 2022/11/24 21:34:30 by rugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* copies n characters from str2 to str1, but for overlapping memory
blocks, memmove() is a safer approach than memcpy().*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	char		*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (src == dst)
		return (dst);
	if (s < d)
	{
		s = s + (len - 1);
		d = d + (len - 1);
		while (len--)
			*d-- = *s--;
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}	
	return (dst);
}
