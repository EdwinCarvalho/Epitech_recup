/*
** my_revstr.c for my_revstr.c in /home/edwin/Librairie
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Mon Jan 23 12:45:15 2017 edwin
** Last update Mon Jan 23 14:01:48 2017 edwin
*/
#include "library.h"

char	*my_revstr(char *str)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  j = my_strlen(str) - 1;
  k = 0;
  while (i < j)
    {
      k = str[i];
      str[i] = str[j];
      str[j] = k;
      i = i + 1;
      j = j - 1;
    }
  return (str);
}
