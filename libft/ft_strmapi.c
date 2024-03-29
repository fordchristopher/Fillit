/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 15:33:16 by jkaplin           #+#    #+#             */
/*   Updated: 2019/03/04 20:34:17 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fresh_s;
	unsigned int	i;

	fresh_s = ft_strnew(ft_strlen(s));
	if (fresh_s == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		fresh_s[i] = f(i, s[i]);
		i++;
	}
	fresh_s[i] = '\0';
	return (fresh_s);
}
