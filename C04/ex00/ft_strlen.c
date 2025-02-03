/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgribble <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:23:57 by lgribble          #+#    #+#             */
/*   Updated: 2025/02/03 14:28:18 by lgribble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
		i++;
	return (i);
}

/*int main()
{
    char str[] = "Hala madrid!!";
	int length = ft_strlen(str);     
    printf("O comprimento da string \"%s\" é: %d\n", str, length);
	return 0;
}*/
