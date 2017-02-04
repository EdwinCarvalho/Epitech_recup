/*
** read_and_display_read_line_1.c for read_and_display_read_line_1.c in /home/edwin/Epitech/GetNextLine/CPE_2016_getnextline_bootstrap
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Tue Jan  3 12:38:01 2017 edwin
** Last update Wed Jan  4 09:03:42 2017 edwin
*/
#include "my.h"

int	read_and_display_read_line_1(int fd)
{
  char	buffer[2];
  int	ret;
  int	i;

  i = 0;
  while (buffer[0] != '\n')
    {
      ret = read(fd, buffer, 1);
      if (ret == -1)
	return (84);
      if (ret == 0)
	return (0);
      my_putchar(buffer[0]);
      i = i + 1;
    }
  return (0);
}
