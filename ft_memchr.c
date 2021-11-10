/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaepark <chaepark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 01:55:10 by chaepark          #+#    #+#             */
/*   Updated: 2021/11/10 02:38:03 by chaepark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	const char		*suc;

	i = 0;
	suc = (const char *)s;
	while (i < n)
	{
		if (suc[i] == c)
			return ((void *)&suc[i]);
		i++;
	}
	return (0);
}
