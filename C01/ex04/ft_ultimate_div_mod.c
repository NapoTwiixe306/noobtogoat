/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julien Milants <julien.milants@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:06:31 by Julien Mila       #+#    #+#             */
/*   Updated: 2022/12/22 14:06:33 by Julien Mila      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultime_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
