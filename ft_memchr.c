/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:44:40 by rugoncal          #+#    #+#             */
/*   Updated: 2022/12/01 16:20:35 by rugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* searches for the first occurrence of the character c (an unsigned char)
in the first n bytes of the string pointed to, by the argument str */

void	*ft_memchr(const void *b, int c, size_t len)
{
	void				*ret;
	unsigned char		d;
	const unsigned char	*temp;
	size_t				i;

	i = 0;
	temp = b;
	d = (unsigned char)c;
	while (i < len)
	{
		if (*temp == d)
			break ;
		temp++;
		i++;
	}
	if (i == len)
		return (0);
	ret = (void *)temp;
	return (ret);
}
