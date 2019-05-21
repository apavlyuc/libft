/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 16:14:49 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 18:40:02 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "libft_types.h"
# include "libft_defines.h"
# include "garbage_collector.h"

/*
**			char block
*/
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_isspace(int c);
/*
**			convert block
*/
int					ft_atoi(const char *str);
char				*ft_itoa(int n);
/*
**			io block
*/
void				ft_putchar_fd(char c, int fd);
void				ft_putchar(char c);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr(int n);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putstr(char const *s);
int					get_next_line(const int fd, char **line);
/*
**			list block
*/
void				ft_lstadd_last(t_list **dst, t_list *new);
void				ft_lstadd_before(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, t_ull));
t_list				*ft_lstdelone(t_list **alst, void (*del)(void*, t_ull));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, t_ull content_size);
t_list				*ft_lstdup(t_list *lst);
void				ft_del_handler(void *content, t_ull content_size);
/*
**			memory block
*/
void				*ft_memalloc(t_ull size);
void				*ft_memset(void *b, int c, t_ull len);
void				ft_bzero(void *s, t_ull n);
void				*ft_memcpy(void *dst, const void *src, t_ull n);
void				*ft_memccpy(void *dst, const void *src, int c, t_ull n);
void				*ft_memmove(void *dst, const void *src, t_ull len);
void				*ft_memchr(const void *s, int c, t_ull n);
int					ft_memcmp(const void *s1, const void *s2, t_ull n);
void				ft_memdel(void	**ap);
/*
**			number block
*/
t_ull				ft_factorial(int n);
int					ft_numlen(long long num);
int					ft_abs(int n);
long long			ft_pow(int n, int p);
/*
**			string block
*/
t_ull				ft_linecount(char *str);
t_ull				ft_partscount(char *str, char *del);
t_ull				ft_strlen(const char *s);
char				*ft_strreplace(char *str, char *old, char *new);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, t_ull n);
t_ull				ft_strlcat(char *dst, const char *src, t_ull detsize);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *h, const char *n, t_ull l);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, t_ull n);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, t_ull len);
char				*ft_strnew(t_ull size);
char				*ft_strdup(const char *s1);
char				*ft_strrev(char *s);
void				ft_strclr(char *s);
void				ft_strdel(char **as);
int					ft_strequ(char	const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, t_ull n);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(t_ull, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(t_ull, char));
char				*ft_strsub(char const *s, t_ull start, t_ull len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);

#endif
