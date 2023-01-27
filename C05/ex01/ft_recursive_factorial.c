/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julien Milants <julien.milants@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:34:43 by Julien Mila       #+#    #+#             */
/*   Updated: 2023/01/27 13:36:31 by Julien Mila      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    int i;

    i = 0;
    if (nb < 0)
        return(0);
    else if (nb == 1 || nb == 0)
        return (1);
    else
        i *= ft_recursive_factorial(nb -1);
    return (i * nb);
    
}