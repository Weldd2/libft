/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 07:21:03 by marvin            #+#    #+#             */
/*   Updated: 2023/10/16 07:21:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*r;
	int		c;

	c = 0;
	*r = (char *)malloc(ft_strlen(s));
	if (!r)
		return (NULL);
	while (s[c])
	{
		r[c] = f(c, s[c]);
		c++;
	}
	return (r);
}
