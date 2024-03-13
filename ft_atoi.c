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

int	ft_atoi(const char *str)
{
	int total;
	int is_negative;

	total = 0;
	is_negative = 0;
	while (*str == ' ' || *str == '\n' || *str == '\r' || *str == '\f'
		|| *str == '\t' || *str == '\v' || *str == '+')
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	while (*str >= '0' && *str <= '9')
	{
		total *= 10;
		total += (*str - 48);
		str++;
	}
	if (is_negative)
		return (-total);
	else
		return (total);
}
