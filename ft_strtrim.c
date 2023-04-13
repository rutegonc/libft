/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:58:32 by rugoncal          #+#    #+#             */
/*   Updated: 2022/12/01 23:53:41 by rugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Allocates (with malloc) and returns a copy of ’s1’ with the characters
specified in ’set’ removed from the beginning and the end of the string. */

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		init;
	size_t		end;
	char		*new;

	new = 0;
	if (set != 0)
	{
		init = 0;
		end = ft_strlen(s1);
		while (ft_strchr(set, s1[init]) && s1[init])
			init++;
		while (ft_strchr(set, s1[end - 1]) && end > init && s1[end -1])
				end--;
		new = (char *)malloc(sizeof(char) * (end - init + 1));
		if (!new)
			return (0);
		else
			ft_strlcpy(new, &s1[init], end - init + 1);
	}
	return (new);
}
