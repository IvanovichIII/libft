/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <igomez-s@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 08:51:02 by igomez-s          #+#    #+#             */
/*   Updated: 2024/03/12 09:04:06 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *string)
{
	int		i;
	char	*ptr;
	char	*or_ptr;

	i = ft_strlen((char *)string);
	ptr = (char *)malloc(i * sizeof(char));
	or_ptr = ptr;
	while (*string)
	{
		*ptr = *string;
		ptr++;
		string++;
	}
	return (or_ptr);
}
