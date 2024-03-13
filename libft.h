/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:04:43 by ivan              #+#    #+#             */
/*   Updated: 2024/03/13 19:41:20 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strlen(const char *str);
void	*ft_memset(void *str, int c, size_t n);
char	*ft_bzero(char *str, int n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *s1, char *s2, size_t n);
int		ft_toupper(int str);
int		ft_tolower(int str);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int	  ft_strncmp(const char *s1, const char *s2, size_t c);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
void	*ft_calloc(size_t number, size_t size);
char	*ft_strdup(const char *string);
int		ft_atoi(char *str);
