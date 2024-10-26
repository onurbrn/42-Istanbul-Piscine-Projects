/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odalkili <odalkili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:59:42 by odalkili          #+#    #+#             */
/*   Updated: 2024/02/15 14:05:39 by odalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*a;
	int		n;
	int		i;

	if (max <= min)
		return (0);
	else
		n = max - min;
	a = (int *) malloc(n * sizeof(int));
	if (!a)
		return (0);
	else
	{
		i = 0;
		while (i < n)
		{
			a[i] = min + i;
			i ++;
		}
		return (a);
	}
}
