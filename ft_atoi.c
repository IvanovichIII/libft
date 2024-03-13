/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:54:04 by ivan              #+#    #+#             */
/*   Updated: 2024/03/05 21:13:32 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_str_is_space(const char *str)
{
	if (*str != ' ' || *str != '\t' || *str != '\n' || *str != '\r'
		|| *str != '\f' || *str != '\v')
	{
		return (0);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int res = 0;
	while (*str)
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return res;
}
