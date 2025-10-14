/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:41:36 by marvin            #+#    #+#             */
/*   Updated: 2025/10/14 22:41:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
  int i;
  int j;

  i = 1;
  while (i < argc)
  {
    j = 0;
    while (argv[i][j] != '\0')
    {
      ft_putchar(argv[i][j]);
      j++;
    }
    ft_putchar('\n');
    i++;
  }
  return (0);
}