/*
** read_next_x_bytes.c for read_next_x_bytes.c in /home/edwin/Epitech/GetNextLine/CPE_2016_getnextline_bootstrap
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Tue Jan  3 12:21:58 2017 edwin
** Last update Tue Jan  3 12:34:19 2017 edwin
*/
#include "my.h"

char	*read_next_x_bytes(int fd, int n)
{
  char	*new;
  char	buffer[2];
  int	i;
  int	ret;

  i = 0;
  new = NULL;
  new = malloc(sizeof(char) * n);
  if (new == NULL)
    return (NULL);
  while (buffer[0] != '\0' && i < n)
    {
      ret = read(fd, buffer, 1);
      if (ret == -1)
	return (NULL);
      if (ret == 0)
	return (new);
      new[i] = buffer[0];
      i = i + 1;
    }
  return (new);
}
