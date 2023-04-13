/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:58:59 by rugoncal          #+#    #+#             */
/*   Updated: 2022/12/01 23:09:21 by rugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Allocates (with malloc) and returns an array of strings obtained by
splitting ’s’ using the character ’c’ as a delimiter. The array must end 
with a NULL pointer. */

static int	count_words(char const *str, int c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			n++;
			while (str[i] != c && str[i])
				i++;
		}
		else
			i++;
	}
	return (n);
}

static char	*word_dup(const char *str, int start, int end)
{
	char	*word;
	int		c;

	c = 0;
	word = malloc((end - start + 1) * sizeof(char));
	while (start < end)
	{
		word[c] = str[start];
		c++;
		start++;
	}
	word[c] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		i;
	int		j;
	int		k;

	new = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	k = -1;
	while (i <= ft_strlen(s))
	{
		if (k < 0 && s[i] != c)
			k = i;
		else if ((s[i] == c || i == ft_strlen(s)) && k >= 0)
		{
			new[j] = word_dup(s, k, i);
			k = -1;
			j++;
		}
		i++;
	}
	new[j] = NULL;
	return (new);
}
