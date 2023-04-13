/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 20:15:23 by rugoncal          #+#    #+#             */
/*   Updated: 2022/11/04 20:15:24 by rugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* returns a pointer to a new string which is a duplicate of the
string s. Memory for the new string is obtained with malloc,
and can be freed with free */

char	*ft_strdup(const char *str)
{
	char	*r;
	int		i;

	i = 0;
	r = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!r)
		return (0);
	while (str[i] != '\0')
	{
		r[i] = str[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}
