/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apesic <apesic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:12:05 by apesic            #+#    #+#             */
/*   Updated: 2024/11/14 13:47:22 by apesic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	space(const char *n, int i)
{
	while (n[i] == ' ' || (n[i] >= '\t' && n[i] <= '\r'))
		i++;
	return (i);
}

int	ft_atoi(const char *n)
{
	int	i;
	int	signe;
	int	res;

	i = 0;
	res = 0;
	signe = 1;
	i = space(n, i);
	if (n[i] == '-' || n[i] == '+')
	{
		if (n[i] == '-')
			signe = -1;
		i++;
	}
	while (n[i] >= '0' && n[i] <= '9')
	{
		res *= 10;
		res += n[i] - 48;
		i++;
	}
	return (res * signe);
}

//  #include <stdlib.h>
// #include <stdio.h>

// int main (int c, char **v)
// {
// 	(void)c;
// 	(void)v;
// 	printf("%d\n", atoi("\t\n\r\v\f  469 \n"));
// 	printf("%d\n", ft_atoi("\t\n\r\v\f  469 \n"));
// 	//ft_atoi("\t\n\r\v\f  469 \n")
// }
/* #include <stdlib.h>
int main(int ac, char **av)
{
	(void) ac;
	int a = atoi(av[1]);
	//ft_atoi(av[1]);
	return 0;
} */