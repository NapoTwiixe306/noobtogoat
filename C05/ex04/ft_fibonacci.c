/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julien Milants <julien.milants@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 15:22:00 by Julien Mila       #+#    #+#             */
/*   Updated: 2023/01/27 15:28:07 by Julien Mila      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
    if(index < 0)
        return (-1);
    if (index < 2)
        return(index);
    return (ft_fibonacci(index - 2) + ft_fibonacci(index -1));
}