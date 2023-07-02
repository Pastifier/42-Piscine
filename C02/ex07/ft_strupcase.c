/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:51:37 by mheinke           #+#    #+#             */
/*   Updated: 2023/05/08 18:59:35 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char string1[] = "AbCdEfG";
	char string2[] = "adsdfgr";
	char string3[] = "";

	printf("%s\n", ft_strupcase(string1));
	printf("%s\n", ft_strupcase(string2));
	printf("%s\n", ft_strupcase(string3));
}
*/
