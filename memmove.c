/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:01:28 by marvin            #+#    #+#             */
/*   Updated: 2023/10/12 12:01:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*src_cpy;
	unsigned char	*dest_cpy;
	unsigned char	*temp;

	src_cpy = (unsigned char *)src;
	dest_cpy = (unsigned char *)dest;
	temp = (unsigned char *)malloc(sizeof(char *) * n);
	if (temp == NULL)
		return (NULL);
	ft_memcpy(temp, src_cpy, n);
	ft_memcpy(dest_cpy, temp, n);
	free(temp);
	return (dest);
}
