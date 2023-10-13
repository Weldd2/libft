/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:41:13 by marvin            #+#    #+#             */
/*   Updated: 2023/10/13 16:41:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_cpy;
	size_t	s_len;
	int		compteur;

	compteur = 0;
	s_len = ft_strlen(s);
	s_cpy = malloc((sizeof(char) * s_len) + 1);
	if (!s_cpy)
		return (NULL);
	while (compteur < s_len)
	{
		s_cpy[compteur] = s[compteur];
		compteur++;
	}
	s_cpy[compteur] = '\0';
	return (s_cpy);
}
