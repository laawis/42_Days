/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaollier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:21:58 by gaollier          #+#    #+#             */
/*   Updated: 2022/10/04 16:41:31 by gaollier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
		*range = NULL;
	return (0);
	*range = (int *)malloc(sizeof(i) * (max - min));
	if (!range)
		return (-1);
	i = 0;
	while (i < max - min)
	{
		*range[i] = min + i;
		i++;
	}
	return (i);
}
