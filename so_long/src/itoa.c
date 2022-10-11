/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:21:30 by humartin          #+#    #+#             */
/*   Updated: 2022/08/18 09:21:35 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/so_long.h"

char	*ft_itoa(int n)
{
	char		*tab;
	long int	i;
	long int	j;
	long int	numbers;

	i = 0;
	numbers = ft_numbers((long int)n);
	tab = malloc(sizeof(char) * numbers);
	if (!tab)
		return (NULL);
	j = numbers - 2;
	tab[numbers - 1] = '\0';
	tab = filling((long int)n, tab, j, numbers);
	return (tab);
}

long int	ft_numbers(long int n)
{
	long int	numbers;

	numbers = 1;
	if (n == 0)
		numbers = 2;
	if (n < 0)
		numbers++;
	while (n != 0)
	{
		n /= 10;
		numbers++;
	}
	return (numbers);
}

char	*filling(long int n, char *tab, long int j, long int numbers)
{
	if (n == 0)
	{
		tab[j] = 48;
		tab[j + 1] = '\0';
		return (tab);
	}
	while (n > 0)
	{
		numbers = n / 10;
		tab[j] = n - (numbers * 10) + 48;
		n /= 10;
		j--;
	}
	return (tab);
}
