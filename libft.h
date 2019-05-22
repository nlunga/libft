/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlunga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 08:38:23 by nlunga            #+#    #+#             */
/*   Updated: 2019/05/22 13:45:05 by nlunga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(const char *str);
char    *ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t len);
int	ft_atoi(const char *str);
int	ft_isdigit(int nb);
int	ft_isalpha(int nb);
int	ft_isalnum(int nb);
int ft_isascii(int nb);
int	ft_isprint(int nb);
int	ft_toupper(int nb);
int	ft_tolower(int nb);

// Additional functions

//void	*ft_memalloc(size_t size);
//void	ft_memdel(void **ap);
//char	*ft_strnew(size_t size);
//void	ft_strdel(char **as);
//void	ft_strclr(char *s);
//void	ft_striter(char *s, void (*f)(char *));
//void	ft_striteri(char *s, void (*f)(unsigned int, char *));
//char	*ft_strmap(char const *s, char (*f)(char));
//char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
//int	ft_strequ(char const *s1, char const *s2);
//int ft_strnequ(char const *s1, char const *s2, size_t n);
//char	*ft_strsub(char const *s, unsigned int start, size_t len);
//char	*ft_strjoin(char const *s1, char const *s2);
//char	*ft_strtrim(char const *s);
//char	**ft_strsplit(char const *s, char c);
//char	*ft_itoa(int n);
void	ft_putchar(char c);
void	ft_putstr(const char *str);
//void	ft_putendl(char const *s);
//void	ft_putnbr(int n);
//void	ft_putchar_fd(char c, int fd);
//void	ft_putstr_fd(char const *s, int fd);
//void	ft_putendl_fd(char const *s, int fd);
//void	ft_putnbr_fd(int n, int fd);

//Bonus functions

//t_list	*ft_lstnew(void const *content, size_t content_size);
//void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
//void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
//void	ft_lstadd(t_list **alst, t_list *new);
//void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
//t_list	*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem));
