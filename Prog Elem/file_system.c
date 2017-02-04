/*
** my_bsq.c for my_bsq.c in /home/aidewen/Epitech/C Prog Elem/CPE_2016_BSQ
** 
** Made by Edwin ROCHA CARVALHO
** Login   <aidewen@epitech.net>
** 
** Started on  Fri Dec  9 16:28:40 2016 Edwin ROCHA CARVALHO
** Last update Sun Dec 18 23:40:20 2016 Edwin ROCHA CARVALHO
*/
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "my.h"

void	fs_understand_return_of_read(int fd, char *buffer, int size)
{
  int	ret_value;

  ret_value = read(fd, buffer, size);
  while (ret_value != 0)
    {
      if (ret_value == -1)
	my_putstr("read a fail");
      else if (ret_value < size)
	my_putstr("read didn't complete the entire buffer");
      else if (ret_value == size)
	my_putstr("read completed the entire buffer");
    }
  if (ret_value == 0)
    my_putstr("read has nothing more to read");
  my_putchar('\n');
}

void	fs_cat_x_bytes(char *filepath, int x)
{
  int	fd;
  char	buffer[2];
  int	i;

  i = 0;
  fd = fs_open_file(filepath);
  while (i < x)
    {
      read(fd, buffer, 1);
      my_putchar(buffer[0]);
      i = i + 1;
    }
  close(fd);
}

void	fs_print_first_line(char *filepath)
{
  int	fd;
  char	buffer[2];
  int	i;

  i = 0;
  fd = fs_open_file(filepath);
  while (buffer[0] != '\n')
    {
      read(fd, buffer, 1);
      my_putchar(buffer[0]);
      i = i + 1;
    }
  close(fd);
}

int	fs_get_number_from_first_line(char *filepath)
{
  int	fd;
  char	buffer[2];
  int	i;
  int	result;

  result = 0;
  i = 0;
  fd = fs_open_file(filepath);
  while (buffer[0] != '\n')
    {
      if (buffer[0] >= 48 && buffer[0] <= 57)
	{
	  read(fd, buffer, 1);
	  result = result * 10 + (buffer[0] - 48);
	  my_putchar(buffer[0]);
	}
      else
	return (-1);
      i = i + 1;
    }
  close(fd);
  return (0);
}
