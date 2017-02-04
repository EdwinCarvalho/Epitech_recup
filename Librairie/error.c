/*
** error.c for error.c in /home/edwin/Librairie
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Thu Jan 26 08:57:27 2017 edwin
** Last update Thu Jan 26 08:58:51 2017 edwin
*/
#include "library.h"

void	my_puterror(char c)
{
  write(2, &c, 1);
}

int	my_strerror(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_puterror(str[i]);
      i = i + 1;
    }
  return (0);
}
