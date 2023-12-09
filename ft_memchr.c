/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:42:42 by marvin            #+#    #+#             */
/*   Updated: 2023/12/09 23:26:51 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *p = s;

	while (n-- != 0) {
		if (*p == (unsigned char)c) {
			return (void *)p;
		}
		p++;
	}
	return (NULL);
}
