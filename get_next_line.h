/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: goosterl <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/21 15:13:14 by goosterl      #+#    #+#                 */
/*   Updated: 2020/01/24 16:22:06 by goosterl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif
# define GNL_EOF 0
# define GNL_READ 1
# define GNL_ERROR -1
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_data
{
	int			ret;
	char		buf[BUFFER_SIZE + 1];
}				t_data;

typedef struct	s_linedata
{
	char		*str;
	size_t		len;
	size_t		plen;
}				t_ldata;

/*
***	get next line
*/

int				get_next_line(int fd, char **line);
int				gnl_make(char **line, char **temp, char c);
int				gnl_checkbuf(char *tmp);
int				gnl_make_temp(char **temp, char *readbuf);

/*
***	utils
*/

int				ft_strlen_nl(char *str);
void			*ft_memcpy(char *dst, char *src, size_t n);
size_t			ft_strlen_c(char *s, char c);
char			*ft_strndup(char *s1, size_t len);
char			*ft_strjoin(char *s1, char *s2);

#endif
