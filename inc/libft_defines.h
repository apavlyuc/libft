/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_defines.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 16:33:53 by apavlyuc          #+#    #+#             */
/*   Updated: 2019/05/25 16:33:54 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_DEFINES_H
# define LIBFT_DEFINES_H

# ifndef EXIT_IF_NULL
#  define EXIT_IF_NULL(x) if (!(x)) exit(-1);
# endif

# ifndef RETN_IF_NULL
#  define RETN_IF_NULL(x) if (!(x)) return (0);
# endif

# ifndef RET_IF_NULL
#  define RET_IF_NULL(x) if (!(x)) return ;
# endif

#endif
