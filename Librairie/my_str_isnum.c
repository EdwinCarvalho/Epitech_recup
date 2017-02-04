/*
** my_str_isnum.c for my_str_isnum.c in /home/edwin/Librairie
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Mon Jan 23 18:00:00 2017 edwin
** Last update Mon Jan 23 18:05:41 2017 edwin
*/
#include "library.h"

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
	return (0);
      i = i + 1;
    }
  return (1);
}
