/*
** my_strncmp.c for my_strncmp.c in /home/edwin/Librairie
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Mon Jan 23 14:36:15 2017 edwin
** Last update Thu Jan 26 09:03:46 2017 edwin
*/
#include "library.h"

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  if (my_strlen(s1) != my_strlen(s2))
    {
      my_strerror("ERROR : Les chaines ne sont pas de même longueur");
      return (0);
    }
  while (s1[i] && s2[i] && i < n)
    {
      if (s1[i] > s2[i])
	return (1);
      else if (s1[i] < s2[i])
	return (-1);
      i = i + 1;
    }
  return (0);
}
