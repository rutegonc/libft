/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 20:13:47 by rugoncal          #+#    #+#             */
/*   Updated: 2022/11/24 21:48:41 by rugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* it appends one string onto the end of the other, and returns the
combined length of both src and dst strings (not counting their
terminating null characters).*/

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	j;
	size_t	len_src;

	i = 0;
	len_src = ft_strlen(src);
	if (dsize == 0)
		return (len_src);
	while (dst[i] != '\0' && i < dsize)
		i++;
	j = i;
	while (src[i - j] && i + 1 < dsize)
	{
		dst[i] = src[i - j];
		i++;
	}
	if (j < dsize)
		dst[i] = '\0';
	return (j + len_src);
}
