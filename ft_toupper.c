/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:16:51 by ivan              #+#    #+#             */
/*   Updated: 2024/03/05 20:37:17 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int str)
{
	if (str >= 'a' && str <= 'z')
		str -= 32;
	return (str);
}
