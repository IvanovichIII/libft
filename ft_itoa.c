/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 00:54:22 by ivan              #+#    #+#             */
/*   Updated: 2024/03/15 01:24:12 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cont_dig(int nb)
{
	int	cont;

	cont = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		nb = -nb;
	while (nb != 0)
	{
		nb /= 10;
		cont ++;
	}
	return (cont);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		i;
	int		is_negative;

	is_negative = n < 0;
	i = cont_dig(n);
	num = malloc((i + is_negative + 1) * sizeof(char));
	if (!num)
		return (NULL);
	if (n == INT_MIN)
		return ("-2147483648");
	num[i + is_negative] = '\0';
	if (is_negative)
		n = -n;
	while (i > 0)
	{
		num[--i + is_negative] = n % 10 + '0';
		n /= 10;
	}
	if (is_negative)
		num[0] = '-';
	return (num);
}
