/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 20:14:23 by rugoncal          #+#    #+#             */
/*   Updated: 2022/11/24 21:36:56 by rugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* it compares only the first n bytes of two strings s1 and s2 */

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	while (i < (len - 1) && s1[i] == s2[i] && s1[i])
		i++;
	if (i != len)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
