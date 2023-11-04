/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 07:04:48 by marvin            #+#    #+#             */
/*   Updated: 2023/10/16 07:04:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*r;
	size_t	c;

	c = 0;
	r = (char *)malloc(size);
	if (!r)
		return (NULL);
	while (c < size)
	{
		r[c] = '\0';
		c++;
	}
	return (r);
}
