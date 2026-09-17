/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 14:06:06 by gugomes           #+#    #+#             */
/*   Updated: 2026/09/08 19:04:12 by gugomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letra;

	letra = 'z';
	while (letra >= 'a')
	{
		write(1, &letra, 1);
		letra--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
