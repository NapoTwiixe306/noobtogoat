/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julien Milants <julien.milants@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:44:30 by Julien Mila       #+#    #+#             */
/*   Updated: 2023/01/26 14:53:33 by Julien Mila      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[c + i] = src[i];
		i++;
	}
	dest [c + i] = '\0';
	return (dest);
}