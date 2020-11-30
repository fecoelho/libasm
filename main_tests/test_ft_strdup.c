/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <fcoelho@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 22:35:32 by fcoelho           #+#    #+#             */
/*   Updated: 2020/11/29 22:35:34 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_main.h"
#include "libasm.h"

static void	test(char *str)
{
	char	*ptr;

	ptr = NULL;
	printf("ptr value       = \"%s\"\n", ptr);
	printf("ptr addr        = %p\n", ptr);
	ptr = strdup(str);
	printf("strdup          = \"%s\"\n", ptr);
	printf("ptr addr        = %p\n", ptr);
	printf("strdup errno    = %d\n\n", errno);
	free(ptr);
	errno = 0;
	ptr = NULL;
	printf("ptr value       = \"%s\"\n", ptr);
	printf("ptr addr        = %p\n", ptr);
	ptr = ft_strdup(str);
	printf("ft_strdup       = \"%s\"\n", ptr);
	printf("ptr addr        = %p\n", ptr);
	printf("ft_strdup errno = %d\n\n", errno);
	free(ptr);
	errno = 0;
	printf("----------------------------\n");
}

void		test_ft_strdup(void)
{
	printf("\n\n\e[1;1m~~~~~~  FT_STRDUP  ~~~~~~\e[0m\n\n");
	test("42 Sao Paulo - LIBASM");
	test("testing ft_strdup");
	test("");
	test("a very very very very very very very very very very long string");
}
