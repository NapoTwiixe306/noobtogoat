/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julien Milants <julien.milants@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:49:09 by Julien Mila       #+#    #+#             */
/*   Updated: 2023/01/26 14:28:01 by Julien Mila      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
    {   
        if (s1[i] > s2[i])
            return (1);
        else if(s1[i] < s2[i])
            return (-1);
        i++;    
    }
    return (0);   
}

#include <stdio.h>
int main(){
    printf("%d", ft_strncmp("hello", "helloworld", 8));
}