/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaollier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:01:41 by gaollier          #+#    #+#             */
/*   Updated: 2022/10/05 12:15:21 by gaollier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strjoin(int size, char **strs,char *sep)
{
	int	i;
	int	j;

	i = 0;
	while (**strs)
		i++;
	j = 0;
	while (*strs)
	{
		strs[i + j] = **strs;
		j++;
	}
	strs[i + j] = '\0'; 
		
