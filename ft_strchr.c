/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaepark <chaepark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 01:23:28 by chaepark          #+#    #+#             */
/*   Updated: 2021/11/10 12:39:59 by chaepark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*sc;

	i = 0;
	sc = (char *)s;
	while (sc[i])
	{
		if (sc[i] == c)
			return (&sc[i]);
		i++;
	}
	if (sc[i] == c)
		return (&sc[i]);
	return (0);
}
