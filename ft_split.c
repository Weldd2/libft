/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amura <amura@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:47:46 by marvin            #+#    #+#             */
/*   Updated: 2023/11/04 19:21:33 by amura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char const *s, char c)
{
	int	i;
	int	is_word;
	int	r;

	r = 0;
	is_word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && !is_word)
		{
			r++;
			is_word = 1;
		}
		else if (s[i] == c)
		{
			is_word = 0;
		}
		i++;
	}
	return (r);
}

char	**ft_split(char const *s, char c)
{
	char	**r;
	int		word_l;
	int		i;
	int		j;

	i = 0;
	r = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!r)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		word_l = 0;
		while (*s && *s != c)
		{
			s++;
			word_l++;
		}
		r[i] = malloc((sizeof(char) * word_l) + 1);
		j = 0;
		while (word_l > 0)
		{
			r[i][j] = *(s - word_l);
			word_l--;
			j++;
		}
		r[i][j] = '\0';
		i++;
	}
	r[i] = '\0';
	return (r);
}
