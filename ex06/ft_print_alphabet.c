/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 22:45:29 by marvin            #+#    #+#             */
/*   Updated: 2025/09/16 22:45:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void  ft_putchar(char c);

void  ft_print_alphabet(void)
{
  char  i;

  i = 'a';
  while (i <= 'z')
  {
    ft_putchar(i);
    i++;
  }
}
