/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchong <kchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 16:52:56 by kchong            #+#    #+#             */
/*   Updated: 2019/02/19 12:38:56 by kchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	first;
	size_t	last;
	char	*trim;

	first = 0;
	last = ft_strlen(s) - 1;
	while (ft_isspace(s[first]))
		first++;
	if (first >= last)
		return (ft_strnew(0));
	while (ft_isspace(s[last]))
		last--;
	trim = ft_strsub(s, first, last - first + 1);
	if (!trim)
		return (NULL);
	return (trim);
}
