/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julien Milants <julien.milants@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:49:57 by Julien Mila       #+#    #+#             */
/*   Updated: 2023/02/09 10:48:05 by Julien Mila      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    int result;

    result = 1;
    if (nb > 0)
        result *= nb * ft_recursive_factorial(nb - 1);
    if (nb < 0)
        return (0);
    return (result);
}

#include <stdio.h>
int main(void)
{
    printf("%i", ft_recursive_factorial(1));
}