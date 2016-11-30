/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelharim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 16:00:56 by aelharim          #+#    #+#             */
/*   Updated: 2016/11/25 20:03:20 by aelharim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		t;

	if (!s1 || !s2)
		return (NULL);
	if (!s1 && !s2)
		return (NULL);
	if (s1)
	{
		t = ft_strlen(s1) + ft_strlen(s2) + 1;
		str = (char*)malloc(sizeof(char) * t);
		if (str == NULL)
			return (NULL);
		ft_strcpy(str, s1);
		ft_strcat(str, s2);
		return (str);
	}
	return (NULL);
}
