/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:46:00 by ivan              #+#    #+#             */
/*   Updated: 2024/03/09 22:54:12 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#include "libft.h"

int	main(void)
{
	char	*str = "hola mundo azul";
	char	*str2 = ft_strchr(str, 'a');
	while (*str2)
	{
		write(1, str2, 1);
		str2++;
	}
//	printf("%s", str);
}
