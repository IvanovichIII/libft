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

static int	ft_str_is_numeric(const char *str)
{
	if (!(*str >= 48 && *str <= 57))
	{
		return (0);
	}
	return (1);
}

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
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (ft_str_is_space(str) == 1)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (ft_str_is_numeric(str) == 1)
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	result *= sign;
	return (result);
}
