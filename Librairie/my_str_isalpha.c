/*
** my_str_isalpha.c for my_str_isalpha.c in /home/edwin/Librairie
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Mon Jan 23 17:43:24 2017 edwin
** Last update Mon Jan 23 17:59:08 2017 edwin
*/
#include "library.h"

int	my_str_isalpha(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (!((str[i] >= 'A' && str[i] <= 'Z')
	    || (str[i] >= 'a' && str[i] <= 'z')))
	return (0);
      i = i + 1;
    }
  return (1);
}
