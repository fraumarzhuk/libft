/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:33:16 by mzhukova          #+#    #+#             */
/*   Updated: 2023/11/14 19:06:29 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*p;

	if (!*needle)
		return ((char *) haystack);
	while (*haystack && len > 0)
	{
		if (*haystack == *needle)
		{
			p = haystack;
			while (*needle)
			{
				p++;
				needle++;
			}
			if (*p == *needle)
				return ((char *) haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
