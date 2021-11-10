/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaepark <chaepark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 01:27:51 by chaepark          #+#    #+#             */
/*   Updated: 2021/11/10 14:13:23 by chaepark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*sc;

	len = ft_strlen(s);
	sc = (char *)s;
	if (!sc)
		return (sc);
	while (len)
	{
		if (sc[len] == (unsigned char)c)
			return (&sc[len]);
		len--;
	}
	if (sc[len] == (unsigned char)c)
		return (&sc[len]);
	return (0);
}
