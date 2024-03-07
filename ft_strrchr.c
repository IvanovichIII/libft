/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <igomez-s@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 09:31:28 by igomez-s          #+#    #+#             */
/*   Updated: 2024/03/07 10:00:12 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strchr(char *str, int c)
{
	while (*str)
	{
		str++;
	}
	while (*str)
	{
		if (*str == c)
		{
			return (str);
		}
		str--;
	}
	return (NULL);
}
