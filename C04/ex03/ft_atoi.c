/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julien Milants <julien.milants@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 23:04:28 by Julien Mila       #+#    #+#             */
/*   Updated: 2023/02/07 10:45:08 by Julien Mila      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int whiteSpace(char *str, int *ptr_i)
{
    int count;
    int i;

    i = 0;
    count = 1;
    while ((str[i] >= 9 && str[i] <=13) || str[i] == 32)
        i++;
    while(str[i] && (str[i] == 43 || str[i] == 45))
    {
        if(str[i] == 45)
            count *= -1;
        i++;
    }
    *ptr_i = i;
    return(count);
}

int ft_atoi(char *str)
{
    int sign;
    int result;
    int i;

    result = 0;
    sign = whiteSpace(str, &i);
    while (str[i] && str[i] >= 48 && str[i] <= 57)
    {
        result *= 10;
        result += str[i] - 48;
        i++;
    }
    result *= sign;
    return (result);
    
}

#include <stdio.h>
int main(void)
{
	char *s = "   ---+--+01234506789ab567";
	printf("%d", ft_atoi(s));
}