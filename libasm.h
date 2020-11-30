/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho </var/mail/fcoelho>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 22:35:44 by fcoelho           #+#    #+#             */
/*   Updated: 2020/11/29 22:35:45 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stddef.h>
# include <errno.h>

/*
**	__errno_location function in errno.h that return the adress of the errno
*/

# define FAIL "\033[31m"
# define PASS "\033[032m"
# define RESET "\033[0m"
# define BUFFER_SIZE 256

size_t		ft_strlen(const char *s);
char		*ft_strcpy(char *dest, const char *src);
int			ft_strcmp(const char *s1, const char *s2);
ssize_t		ft_write(int fd, const void *buf, size_t count);
ssize_t		ft_read(int fd, void *buf, size_t count);
char		*ft_strdup(const char *s);

#endif
