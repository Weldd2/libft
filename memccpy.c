/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:38:10 by marvin            #+#    #+#             */
/*   Updated: 2023/10/12 11:38:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*src_cpy;
	unsigned char	*dest_cpy;

	src_cpy = (unsigned char *)src;
	dest_cpy = (unsigned char *)dest;
	while (n > 0)
	{
		*dest_cpy = *src_cpy;
		dest_cpy++;
		if (*src_cpy == (unsigned char)c)
			return (dest_cpy);
		src_cpy++;
		n--;
	}
	return (NULL);
}
