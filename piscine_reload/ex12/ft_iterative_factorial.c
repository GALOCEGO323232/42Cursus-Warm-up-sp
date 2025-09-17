/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:52:22 by kgagliar          #+#    #+#             */
/*   Updated: 2025/07/08 18:26:39 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	soma;

	if (nb < 0)
		return (0);
	soma = 1;
	while (nb > 0)
	{
		soma *= nb;
		nb--;
	}
	return (soma);
}

// int	main(void)
// {
// 	int	result = ft_iterative_factorial(-1);

// 	printf("5! = %d\n", result);
// }
