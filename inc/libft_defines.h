#ifndef LIBFT_DEFINES_H
# define LIBFT_DEFINES_H

# ifndef EXIT_IF_NULL
#  define EXIT_IF_NULL(x) if (!x) exit(-1);
# endif

# ifndef RETN_IF_NULL
#  define RETN_IF_NULL(x) if (!x) return (x);
# endif

# ifndef RET_IF_NULL
#  define RET_IF_NULL(x) if (!x) return ;
# endif

#endif
