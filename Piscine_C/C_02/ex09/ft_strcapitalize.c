/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaollier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:22:10 by gaollier          #+#    #+#             */
/*   Updated: 2022/09/21 12:41:16 by gaollier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_isuppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_is_alphanumeric(char c)
{
	if (ft_is_lowercase(c) || ft_isuppercase(c) || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isuppercase(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	if (ft_is_lowercase(str[0]))
		str[0] = str[0] - 32;
	i = 1;
	while (str[i])
	{
		if (!ft_is_alphanumeric(str[i - 1]) && ft_is_lowercase(str[i]))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
