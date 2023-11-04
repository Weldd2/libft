/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:00:46 by marvin            #+#    #+#             */
/*   Updated: 2023/10/13 19:00:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	total;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total = dest_len + src_len;
	if (size <= dest_len)
		return (size + src_len);
	if (size > dest_len)
		ft_strncat(dest, src, size - dest_len - 1);
	dest[size - 1] = '\0';
	return (total);
}
