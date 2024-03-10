/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 00:58:56 by ivan              #+#    #+#             */
/*   Updated: 2024/03/10 01:00:13 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*or_s1;
	char	*or_s2;

	or_s1 = s1;
	or_s2 = s2;
	while (*s1 != '\0' && n > 0)
	{
		or_s1 = s1;
		s2 = or_s2;
		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return (or_s1);
		s1++;
		n--;
	}
	return (NULL);
}
