/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amura <amura@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:47:46 by marvin            #+#    #+#             */
/*   Updated: 2023/11/05 15:30:19 by amura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
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

static int	ft_getword_l(char *s, char c)
{
	int	word_l;

	word_l = 0;
	while (*s && *s == c)
		s++;
	while (*s && *s != c)
	{
		word_l++;
		s++;
	}
	return (word_l);
}

char	**ft_split(char *s, char c)
{
	char	**r;
	int		word_l;
	int		i;

	i = 0;
	r = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!r)
		return (NULL);
	while (*s)
	{
		word_l = ft_getword_l(s, c);
		r[i] = (char *)malloc(sizeof(char) * (word_l + 1));
		if (!r[i])
			return (NULL);
		while (*s && *s == c)
			s++;
		ft_strlcpy(r[i], s, word_l + 1);
		s += word_l;
		i++;
	}
	r[i] = '\0';
	return (r);
}
