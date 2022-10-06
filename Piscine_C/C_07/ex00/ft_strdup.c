/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaollier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:38:27 by gaollier          #+#    #+#             */
/*   Updated: 2022/10/04 16:51:15 by gaollier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*s;
	int		i;

	i = 0;
	s = (char *)malloc(sizeof(*s) * ft_len(src) + 1);
	if (!s)
		return (NULL);
	while (src[i])
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	write(1, s, i);
	return (s);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_strdup(av[1]);
	write(1, "\n", 1);
	return (0);
}
