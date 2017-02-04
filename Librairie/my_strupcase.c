/*
** my_strupcase.c for my_strupcase.c in /home/edwin/Librairie
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Mon Jan 23 14:56:01 2017 edwin
** Last update Mon Jan 23 15:00:38 2017 edwin
*/
#include "library.h"

char	*my_strupercase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	str[i] = str[i] - 32;
      i = i + 1;
    }
  return (str);
}
