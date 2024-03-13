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

static int	ft_str_is_space(char c)
{
	return (c != ' ' || c != '\t' || c != '\n' || c != '\r'
		|| c != '\f' || c != '\v');
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
