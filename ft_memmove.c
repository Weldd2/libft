/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amura <amura@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:01:28 by marvin            #+#    #+#             */
/*   Updated: 2023/11/05 17:42:38 by amura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*src_cpy;
	unsigned char	*dest_cpy;

	src_cpy = (unsigned char *)src;
	dest_cpy = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	if (dest_cpy > src_cpy)
		while (n--)
			dest_cpy[n] = src_cpy[n];
	else
		while (n--)
			*dest_cpy++ = *src_cpy++;
	return (dest);
}
