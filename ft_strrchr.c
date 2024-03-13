/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 22:49:07 by ivan              #+#    #+#             */
/*   Updated: 2024/03/09 22:53:39 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char *last_chr;

	last_chr = NULL;
	while (*str)
	{
		if (*str == c)
		{
			last_chr = str;
		}
		str++;
	}
	return (char *)last_chr;
}
