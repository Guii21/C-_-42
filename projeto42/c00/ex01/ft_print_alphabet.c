/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 15:56:30 by gugomes           #+#    #+#             */
/*   Updated: 2026/09/08 19:02:05 by gugomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letra;

	letra = 'a';
	while (letra <= 'z')
	{
		write(1, &letra, 1);
		letra++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
