/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amura <amura@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 13:05:52 by antoinemura       #+#    #+#             */
/*   Updated: 2024/05/25 22:36:55 by amura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_free(void **addr)
{
	free(*addr);
	*addr = NULL;
}

void	ft_vfree(int count, ...)
{
	int		i;
	va_list	lst;
	void	**tofree;

	i = 0;
	va_start(lst, count);
	while (i < count)
	{
		tofree = va_arg(lst, void *);
		free(*tofree);
		*tofree = NULL;
		i++;
	}
}
