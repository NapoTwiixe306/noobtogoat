/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julien Milants <julien.milants@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:49:15 by Julien Mila       #+#    #+#             */
/*   Updated: 2023/02/08 20:47:15 by Julien Mila      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int	nb)
{
	unsigned int	result;

	result = 1;
	while (nb > 0)
	{
		 result *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (result);
}

#include <stdio.h>
int main()
{
    printf("%i", ft_iterative_factorial(5));
    return (0);
}