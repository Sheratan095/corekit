/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   corekit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 14/02/2024 01:34:18 by maceccar          #+#    #+#             */
/*   Updated: 24/02/2024 19:46:19 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COREKIT_H
# define COREKIT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

# include "stack.h"
# include "libft.h"

//Not including ft_printf.h and get_next_line.h because i don't want to
//	inlcude also their help functions, so i just use their prototype

typedef enum e_bool
{
	false,
	true
}	t_bool;

int		ft_printf(const char *format, ...);

char	*get_next_line(int fd, int last_call);

char	*ft_strjoin_free_s1(char *s1, char *s2);

t_bool	ft_is_string_numeric(char *str);

//MATIRX

char	**ft_duplicate_char_matrix(char **matrix);

void	ft_print_char_matrix(char **matrix);

size_t	ft_count_matrix_row(void **matrix);

void	ft_free_matrix(void **matrix);

#endif
