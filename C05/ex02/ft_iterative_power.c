/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julien Milants <julien.milants@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:52:21 by Julien Mila       #+#    #+#             */
/*   Updated: 2023/02/09 20:49:57 by Julien Mila      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int rslt;

    rslt = nb;
    while(power > 1)
    {
        rslt *= nb;
        power --;
    }
    if(power == 0)
        return (1);
    if(power < 0)
        return (0);
    return (rslt);
}

#include <stdio.h>
int main()
{
    printf("%i", ft_iterative_power(3, 4));
}