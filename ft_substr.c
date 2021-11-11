/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaepark <chaepark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 20:02:34 by chaepark          #+#    #+#             */
/*   Updated: 2021/11/10 20:21:38 by chaepark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	i;

	arr = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	if (!arr)
		return (0);
	if (!s)
		return (0);
	if (start < ft_strlen(s))
	{
		while (s[start] && i < len)
			arr[i++] = s[start++];
	}
	arr[i] = '\0';
	return (arr);
}
