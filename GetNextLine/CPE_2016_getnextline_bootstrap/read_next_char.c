/*
** read_next_char.c for read_next_char.c in /home/edwin/Epitech/GetNextLine/CPE_2016_getnextline_bootstrap
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Mon Jan  2 09:54:59 2017 edwin
** Last update Tue Jan  3 12:34:58 2017 edwin
*/
#include "my.h"

char	read_next_char(int fd)
{
  char	buffer[2];
  int	ret;
  
  ret = read(fd, buffer, 1);
  if (ret == -1)
    return (0);
  if (ret == 0)
    return (buffer[0]);
  buffer[ret] = '\0';
  return (buffer[0]);
}
