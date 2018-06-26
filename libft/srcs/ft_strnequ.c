/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnequ.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dzonda <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/12 20:14:01 by dzonda       #+#   ##    ##    #+#       */
/*   Updated: 2017/12/12 20:17:09 by dzonda      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	int i;

	i = -1;
	if (s1 && s2)
		while (++i < (int)n)
			if (s1[i] != s2[i])
				return (0);
	return (1);
}
