/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 12:56:46 by kgagliar          #+#    #+#             */
/*   Updated: 2025/07/09 13:17:37 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		size;
	int		*length;
	int		i;

	size = max - min;
	if (min >= max)
		return (NULL);
	length = malloc((size) * (sizeof(int)));
	if (!length)
		return (NULL);
	i = 0;
	while (i < size)
	{
		length[i] = min + i;
		i++;
	}
	return (length);
}
