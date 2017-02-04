/*
** read_and_display_read_line_x.c for read_and_display_read_line_x.c in /home/edwin/Epitech/GetNextLine/CPE_2016_getnextline_bootstrap
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Wed Jan  4 09:06:10 2017 edwin
** Last update Wed Jan  4 12:36:12 2017 edwin
*/
#include "my.h"

int	read_and_display_read_line_x(int fd, int x)
{
  char	buffer[x];
  int	ret;
  int	i;

  i = 0;
  while (buffer[0] != '\n')
    {
      ret = read(fd, buffer, x);
      if (ret == -1)
	return (84);
      if (ret == 0)
	return (0);
      my_putchar(buffer[0]);
      i = i + 1;
    }
  return (0);
}
