/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odalkili <odalkili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:43:20 by odalkili          #+#    #+#             */
/*   Updated: 2024/02/15 14:05:16 by odalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*a;
	int		j;

	i = 0;
	while (src[i])
		i++;
	a = (char *) malloc((i + 1));
	if (!a)
		return (0);
	else
	{
		j = 0;
		while (j < i)
		{
			a[j] = src[j];
			j++;
		}
		a[i] = '\0';
		return (a);
	}
}
