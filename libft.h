/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:04:43 by ivan              #+#    #+#             */
/*   Updated: 2024/03/11 11:43:07 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int    ft_isalpha(int str);
int		ft_isdigit(char *str);
int		ft_isalnum(char *str);
int		ft_isascii(char *str);
int		ft_isprint(char *str);
int		ft_strlen(char *str);
char	*ft_memset(char *str, char c, int n);
char	*ft_bzero(char *str, int n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *s1, char *s2, size_t n);
char	*ft_toupper(char *str);
char	*ft_tolower(char *str);
char	*ft_strchr(char *str, int c);
char	*ft_strrchr(char *str, int c);
char	*ft_strncmp(const char *s1, const char *s2, size_t c);
char	*ft_strnstr(char *s1, char *s2, int c);
void	*ft_calloc(size_t number, size_t size);
char	*ft_strdup(const char *string);
int		ft_atoi(char *str);
