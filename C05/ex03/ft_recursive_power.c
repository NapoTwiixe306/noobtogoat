/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julien Milants <julien.milants@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:06:11 by Julien Mila       #+#    #+#             */
/*   Updated: 2023/02/09 20:49:54 by Julien Mila      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
    int result;

    result = nb;
    if(power > 1)
        return (nb * ft_recursive_power(nb, (power -1)));
    if(power == 0)
        return(1);
    if(power < 0)
        return(0);
    return(result);
}

#include <stdio.h>
int main()
{
    printf("%i", ft_recursive_power(3, 4));
}