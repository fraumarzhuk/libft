/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:41:33 by mzhukova          #+#    #+#             */
/*   Updated: 2023/11/13 17:50:21 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*srce;
	char	*dest;
	int		i;

	*srce = (char *) src;
	*dest = (char *) dst;
	i = 0;
	while (n-- > 0)
	{
		dest[i] = srce[i];
		i++;
	}
}
