/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_split_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 20:25:47 by antoinemura       #+#    #+#             */
/*   Updated: 2024/05/26 20:28:23 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_str_split_char(char *str)
{
	size_t	length;
	char	*char_array;
	int		i;
	
	if (str == NULL)
		return NULL;
	length = ft_strlen(str);
	char_array = (char*)malloc((length + 1) * sizeof(char));
	if (char_array == NULL)
		return (NULL);
	i = 0;
	while (i < (int)length)
	{
		char_array[i] = str[i];
		i++;
	}
	char_array[length] = '\0';
	return (char_array);
}
