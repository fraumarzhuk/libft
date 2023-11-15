/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:12:32 by mzhukova          #+#    #+#             */
/*   Updated: 2023/11/15 15:01:37 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	i;

	i = 0;
	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (len-- && s[start] != '\0')
		p[i++] = s[start++];
	p[i] = '\0';
	return (p);
}

// #include <stdio.h>

// int main (void)
// {
// 	char *s1 = "Hello beautiful world";
// 	char *result = ft_substr(s1, 30, 8);
// 	printf("Result: %s\n", result);
// 	return (0);
// }