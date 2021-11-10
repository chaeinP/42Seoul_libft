/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaepark <chaepark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:48:32 by chaepark          #+#    #+#             */
/*   Updated: 2021/11/10 19:57:46 by chaepark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*arr;

	i = -1;
	arr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!arr)
		return (0);
	while (s1[++i])
		arr[i] = s1[i];
	arr[i] = '\0';
	return (arr);
}
