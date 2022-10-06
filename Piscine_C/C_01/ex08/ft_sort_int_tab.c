/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaollier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:14:44 by gaollier          #+#    #+#             */
/*   Updated: 2022/09/16 10:17:54 by gaollier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	k;
	int	tmp;

	a = 0;
	k = (size - 1);
	while (k > 0)
	{
		if (tab[a] > tab[a + 1])
		{
			tmp = tab[a];
			tab[a] = tab[a + 1];
			tab[a + 1] = tmp;
		}
		if (a == k)
		{
			a = 0;
			k--;
		}
		else
			a++;
	}
}
