/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:30:43 by mzhukova          #+#    #+#             */
/*   Updated: 2023/11/15 16:20:59 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//cat the ref from the beginning
// if r < set return r
//Cat the end from the end
//Null-terminate the string
//return the new string
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*r;
	int		i;

	if (ft_strlen(s1) < ft_strlen(set))
		return (NULL);
	r = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!r)
		return (NULL);
	ft_strlcpy(r, s1, ft_strlen(s1));
	i = 0;
	while (r[i++] == set[i++])
		r = r[i++];
	if (ft_strlen(r) < ft_strlen(set))
		return (r);
}
