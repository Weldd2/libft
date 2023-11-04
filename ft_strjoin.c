/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 07:46:02 by marvin            #+#    #+#             */
/*   Updated: 2023/10/16 07:46:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * (ft_strlen(s2) + ft_strlen(s1)));
	if (!s)
		return (NULL);
	ft_strcat(s, s1);
	return (ft_strcat(s, s2));
}
