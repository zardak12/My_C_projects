/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 16:09:41 by lcarmelo          #+#    #+#             */
/*   Updated: 2019/09/27 16:09:42 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_striter(char *s, void (*f)(char *))
{
	size_t i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
		(*f)(&s[i++]);
}
