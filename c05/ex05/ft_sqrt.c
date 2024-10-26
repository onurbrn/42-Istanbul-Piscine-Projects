/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odalkili <odalkili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 21:21:08 by odalkili          #+#    #+#             */
/*   Updated: 2024/02/12 21:21:09 by odalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqr;

	sqr = 1;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else if (nb > 1)
	{
		while (sqr * sqr <= nb && sqr <= 46340)
		{
			if (sqr * sqr == nb)
				return (sqr);
			sqr++;
		}
	}
	return (0);
}
