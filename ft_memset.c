/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 20:12:29 by rugoncal          #+#    #+#             */
/*   Updated: 2022/11/24 21:36:04 by rugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* copies the character c (an unsigned char) to the first n characters of the
string pointed to, by the argument str. */

void	*ft_memset(void *dest, int c, size_t len)
{
	char		*ptr;
	size_t		i;

	i = 0;
	ptr = (char *)dest;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (dest);
}
