/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 20:12:41 by rugoncal          #+#    #+#             */
/*   Updated: 2022/11/24 21:32:52 by rugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* erases the data in the n bytes of the memory starting at the location
pointed to by s, by writing zeros (bytes containing '\0') to that area */

void	ft_bzero(void *b, size_t len)
{
	size_t		i;
	char		*str;

	i = 0;
	str = (char *)b;
	while (i < len)
	{
		str[i] = 0;
		i++;
	}
}
