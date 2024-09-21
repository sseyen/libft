/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alisseye <alisseye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:20:51 by alisseye          #+#    #+#             */
/*   Updated: 2024/09/18 19:14:32 by alisseye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return (char *)haystack;
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[i] && haystack[i + j] == needle[j] && (i + j) < len)
			j++;
		if (!needle[j])
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	const char *haystack = "Hello, world!";
// 	const char *needle = "world";
// 	printf("%s\n", ft_strnstr(haystack, needle, 11));
// 	printf("%s\n", strnstr(haystack, needle, 11));
// }