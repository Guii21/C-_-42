/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 19:59:20 by gugomes           #+#    #+#             */
/*   Updated: 2026/09/14 17:13:39 by gugomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (i < size -1)
	{
		j = 0;
		while (j < size -1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j + 1];
				tab[j + 1] = tab [j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	tab[] = {10, 8, 15, 01};
	int	size;

	size = 4;
	ft_sort_int_tab(tab, size);
	return (0);
}
*/
