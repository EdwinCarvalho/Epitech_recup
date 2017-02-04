/*
** my_strcmp.c for my_strcmp.c in /home/edwin/Librairie
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Mon Jan 23 14:02:20 2017 edwin
** Last update Sat Jan 28 19:11:21 2017 edwin
*/
#include "library.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] != '\0' && s2[i] != '\0')
    {
      if (s2[i] > s1[i])
	return (-1);
      else if (s1[i] > s2[i])
	return (1);
      i = i + 1;
    }
  return (0);
}
