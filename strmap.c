/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 07:14:19 by marvin            #+#    #+#             */
/*   Updated: 2023/10/16 07:14:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*r;
	char	*r_cpy;

	*r = (char *)malloc(ft_strlen(s));
	if (!r)
		return (NULL);
	r_cpy = r;
	while (*s)
	{
		*r = f(*s);
		r++;
		s++;
	}
	return (r_cpy);
}
