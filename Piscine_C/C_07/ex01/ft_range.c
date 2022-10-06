/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaollier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:18:59 by gaollier          #+#    #+#             */
/*   Updated: 2022/09/29 16:18:43 by gaollier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = (int *) malloc(sizeof(int) * (max - min + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
