/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:35:20 by marvin            #+#    #+#             */
/*   Updated: 2025/10/07 22:35:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int main (argc, argv)
{
  int fd;
  char buffer[1];
  int byte_read;

  if (argc < 2)
  {
    write(1, "File name missing.\n", 19);
    return (1);
  }
  fd = open(argv[1], O_RDONLY);
  if (fd < 0)
  {
    write(1, "Cannot read file.\n", 18);
    return (1);
  }
  while ((byte_read = read(fd, buffer, 1)) > 0)
    write(1, buffer, byte_read);
  close(fd);
  return (0);
}