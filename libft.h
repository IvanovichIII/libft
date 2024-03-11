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

int		ft_isalpha(char *str);
int		ft_isdigit(char *str);
int		ft_isalnum(char *str);
int		ft_isascii(char *str);
int		ft_isprint(char *str);
int		ft_strlen(char *str);
char	*ft_memset(char *str, char c, int n);
char	*ft_bzero(char *str, int n);
char	*ft_memcpy(char *dest, char *src, int n);
char	*ft_memmove(char *dest, char *src, int n);
char	*ft_toupper(char *str);
char	*ft_strchr(char *str, int c);
char	*ft_strrchr(char *str, int c);
char	*ft_strncmp(const char *s1, const char *s2, unsigned int c);
char	*ft_strnstr(char *s1, char *s2, int c);
void	*ft_calloc(size_t number, size_t size);
int		ft_atoi(char *str);
