/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 20:15:13 by rugoncal          #+#    #+#             */
/*   Updated: 2022/11/12 18:11:22 by rugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* allocates the requested memory and returns a pointer to it.
The difference in malloc and calloc is that malloc does not set
the memory to zero where as calloc sets allocated memory to zero. */

void	*ft_calloc(size_t number, size_t size)
{
	void	*ptr;

	ptr = malloc(number * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, size * number);
	return (ptr);
}
