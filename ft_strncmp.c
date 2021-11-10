/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaepark <chaepark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 01:33:01 by chaepark          #+#    #+#             */
/*   Updated: 2021/11/10 02:33:58 by chaepark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*suc1;
	unsigned char	*suc2;

	i = 0;
	suc1 = (unsigned char *)s1;
	suc2 = (unsigned char *)s2;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (suc1[i] != suc2[i])
			return ((suc1[i] - suc2[i]));
		i++;
	}
	return (0);
}
