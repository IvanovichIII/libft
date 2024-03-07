/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 00:42:43 by ivan              #+#    #+#             */
/*   Updated: 2024/03/06 13:31:46 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	*copy_backwards(char *dest, char *src, int n)
{
	char	*temp;

	temp = dest + n - 1;
	src += n - 1;
	while (*src && n > 0)
	{
		*temp = *src;
		temp--;
		src--;
		n--;
	}
	return dest;
}

static void	*copy_forwards(char *dest, char *src, int n) 
{
	char *temp;

	temp = dest;
	while (*src && n > 0)
	{
		*temp = *src;
		temp++;
		src++;
		n--;
	}
	return dest;
}

void	*ft_memmove(char *dest, char *src, int n) {
	if (dest > src && dest < src + n)
		return copy_backwards(dest, src, n);
		else
			return copy_forwards(dest, src, n);
}
