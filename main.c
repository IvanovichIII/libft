/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:46:00 by ivan              #+#    #+#             */
/*   Updated: 2024/03/07 09:59:30 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#include "libft.h"

int	main(void)
{
	char	*str = "hola mundo azul";
	char	*str2 = ft_strchr(str, 12);
	while (*str2 && str2)
	{
		write(1, str2, 1);
		str2++;
	}
//	printf("%s", str);
}
