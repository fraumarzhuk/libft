/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariannazhukova <mariannazhukova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:41:33 by mzhukova          #+#    #+#             */
/*   Updated: 2023/11/13 22:59:14 by mariannazhu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*src_arr;
	unsigned char	*dst_arr;
	size_t			i;

	*src_arr = (unsigned char *) src;
	*dst_arr = (unsigned char *) dst;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (n-- > 0)
	{
		dst_arr[i] = src_arr[i];
		i++;
	}
}
