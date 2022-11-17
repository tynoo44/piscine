/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:37:05 by ralonso-          #+#    #+#             */
/*   Updated: 2022/11/14 15:38:35 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest [i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*int main(void)
{
	char src[] = "hola2";
	char dest[] = "hola1";
	printf("%s", ft_strcat(dest, src));
}*/