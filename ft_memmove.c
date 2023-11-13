/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:59:20 by mzhukova          #+#    #+#             */
/*   Updated: 2023/11/13 18:21:26 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*dest_arr;
	unsigned char	*src_arr;
	size_t			i;

	i = 0;
	*dest_arr = (unsigned char *) dest;
	*src_arr = (unsigned char *) src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (len--)
			dest_arr[len] = src_arr[len];
	}
	else
	{
		while (i++ <= len)
			dest_arr[i] = src_arr[i];
	}
	return (dest);
}
