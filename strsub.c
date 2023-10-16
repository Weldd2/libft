/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsub.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 07:34:55 by marvin            #+#    #+#             */
/*   Updated: 2023/10/16 07:34:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*r;
	int		i;

	i = start;
	r = (char *)malloc(len);
	if (!r)
		return (NULL);
	while (s[start + i] && i < len)
	{
		r[i] = s[start + i];
		i++;
	}
	return (r);
}
