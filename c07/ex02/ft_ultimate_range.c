/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odalkili <odalkili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 05:05:25 by odalkili          #+#    #+#             */
/*   Updated: 2024/02/15 14:07:28 by odalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		n;
	int		*ptr;

	if (max > min)
		ptr = (int *) malloc((max - min) * sizeof(int));
	else
	{
		*range = NULL;
		return (0);
	}
	if (!ptr)
		return (-1);
	else
	{
		n = 0;
		while (n < (max - min))
		{
			ptr[n] = min + n;
			n++;
		}
		*range = ptr;
	}
	return (n);
}
