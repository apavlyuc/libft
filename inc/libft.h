/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 16:14:49 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/10/30 20:13:02 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

# define EXIT_IF_NULL(x) if (!x) exit(-1);
# define RETN_IF_NULL(x) if (!x) return (x);
# define RET_IF_NULL(x) if (!x) return ;

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
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
/*
**			list block
*/
void				ft_lstadd_last(t_list **dst, t_list *new);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, unsigned long long));
t_list				*ft_lstdelone(t_list **alst, void (*del)(void*, unsigned long long));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, unsigned long long content_size);
/*
**			memory block
*/
void				*ft_memalloc(unsigned long long size);
void				*ft_memset(void *b, int c, unsigned long long len);
void				ft_bzero(void *s, unsigned long long n);
void				*ft_memcpy(void *dst, const void *src, unsigned long long n);
void				*ft_memccpy(void *dst, const void *src, int c, unsigned long long n);
void				*ft_memmove(void *dst, const void *src, unsigned long long len);
void				*ft_memchr(const void *s, int c, unsigned long long n);
int					ft_memcmp(const void *s1, const void *s2, unsigned long long n);
void				ft_memdel(void	**ap);
/*
**			number block
*/
unsigned long long	ft_factorial(int n);
int					ft_numlen(long long num);
int					ft_abs(int n);
long long			ft_pow(int n, int p);
/*
**			string block
*/
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t detsize);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *h, const char *n, size_t l);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char	const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
int					ft_linecount(char *str);
int					ft_partscount(char *str, char *del);
char				*ft_replace(char *str, char *old, char *new);
char				*ft_strrev(char *s);

#endif
