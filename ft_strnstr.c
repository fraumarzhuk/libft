/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariannazhukova <mariannazhukova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:33:16 by mzhukova          #+#    #+#             */
/*   Updated: 2023/11/17 21:44:10 by mariannazhu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nl;

	nl = ft_strlen(needle);
	if (!nl)
		return ((char *) haystack);
	while (*haystack && len >= nl)
	{
		if (*haystack == *needle && !ft_strncmp(haystack, needle, nl))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
