/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapari <alvapari@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:43:16 by alvapari          #+#    #+#             */
/*   Updated: 2023/08/27 19:26:42 by alvapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sstr;
	size_t	count;

	count = 0;
	sstr = malloc(len + 1);
	if (sstr == NULL || s == NULL || start >= strlen(s))
		return (NULL);
	while (count < len && s[start] != '\0')
		sstr[count++] = s[start++];
	sstr[count] = '\0';
	return (sstr);
}

int	main()
{
	char	*ey;

	ey = "ABCDEFG";
	printf("%lu\n", strlen(ey));
	printf("%s", ft_substr(ey, 7, 1));
}