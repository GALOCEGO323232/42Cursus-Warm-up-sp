/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 12:15:43 by kgagliar          #+#    #+#             */
/*   Updated: 2025/07/09 12:53:18 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	while (src[i] != '\0')
		i++;
	dest = malloc((i + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	j = 0;
	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
