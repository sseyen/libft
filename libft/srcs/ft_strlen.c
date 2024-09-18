/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alisseye <alisseye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:27:11 by alisseye          #+#    #+#             */
/*   Updated: 2024/09/18 19:48:34 by alisseye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while(str[len])
		len++;
	return (len);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_strlen("####"));
// }