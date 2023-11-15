/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:48:02 by mzhukova          #+#    #+#             */
/*   Updated: 2023/11/15 15:28:06 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*char_ptr;

	char_ptr = (const char *)s;
	while (n > 0)
	{
		if ((unsigned char)*char_ptr == (unsigned char)c)
			return ((void *)char_ptr);
		char_ptr++;
		n--;
	}
	return (NULL);
}
