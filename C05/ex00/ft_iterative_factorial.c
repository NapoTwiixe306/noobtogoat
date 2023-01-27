/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julien Milants <julien.milants@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:30:02 by Julien Mila       #+#    #+#             */
/*   Updated: 2023/01/27 13:33:44 by Julien Mila      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int i;

    i = 1;
    while (nb < 0)
        return (0);
    while ((nb == 1) || (nb == 0))
        return (1);
    while (nb > 1)
        i *= nb--;
    return (1);
    
}