/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:59:54 by rugoncal          #+#    #+#             */
/*   Updated: 2022/11/20 17:12:17 by rugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Applies the function ’f’ to each character of the string ’s’, and passing
its index as first argument to create a new string (with malloc) resulting
from successive applications of ’f’. */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	i;

	new = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!new)
		return (0);
	i = 0;
	while (*s)
	{
		new[i] = f(i, *s);
		i++;
		s++;
	}
	new[i] = '\0';
	return (new);
}
