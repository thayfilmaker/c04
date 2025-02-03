/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgribble <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:29:15 by lgribble          #+#    #+#             */
/*   Updated: 2025/02/03 14:31:08 by lgribble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		write (1, &str[i++], 1);
	}
}

/*int main()
{
    char str [] =  "je suis brésilien!";
    ft_putstr(str);
    return 0;
}*/
