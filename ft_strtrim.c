/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaepark <chaepark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:09:35 by chaepark          #+#    #+#             */
/*   Updated: 2021/11/11 13:01:03 by chaepark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*find_start_s1(char const *s1, char const *set)
{
	size_t	i;
	char	*start;

	i = 0;
	while (s1[i] && check_in_set(s1[i], set))
		i++;
	if (i == ft_strlen(s1))
		start = (char *)s1;
	else
		start = (char *)&s1[i];
	return (start);
}

static char	*find_end_s1(char const *s1, char const *set)
{
	size_t	i;
	char	*end;

	i = ft_strlen(s1) - 1;
	while (i > 0 && check_in_set(s1[i], set))
		i--;
	if (i == 0)
		end = (char *)s1;
	else
		end = (char *)&s1[i];
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*start;
	char	*end;
	char	*str;

	i = 0;
	if (!s1 || !set)
		return (0);
	start = find_start_s1(s1, set);
	end = find_end_s1(s1, set);
	if (start < end)
	{
		str = (char *)malloc(sizeof(char) * (end - start + 2));
		if (!str)
			return (0);
		while (start <= end)
			str[i++] = *start++;
		str[i] = '\0';
		return (str);
	}
	return (ft_strdup(""));
}
