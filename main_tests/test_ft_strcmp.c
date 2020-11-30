/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <fcoelho@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 22:35:32 by fcoelho           #+#    #+#             */
/*   Updated: 2020/11/29 22:35:34 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_main.h"
#include "libasm.h"

static void	test(char *s1, char *s2)
{
	printf("s1        = \"%s\"\n", s1);
	printf("s2        = \"%s\"\n\n", s2);
	printf("strcmp    = %d\n", strcmp(s1, s2));
	printf("ft_strcmp = %d\n", ft_strcmp(s1, s2));
	printf("----------------------------\n");
}

void		test_ft_strcmp(void)
{
	printf("\n\n\e[1;1m~~~~~~  FT_STRCMP  ~~~~~~\e[0m\n\n");
	test("", "");
	test("", "Hello World");
	test("Hello World", "");
	test("test\ting", "test\ving");
	test("1234\0p1234", "1234\0abcdef");
}
