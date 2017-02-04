/*
** my_strncpy.c for my_strncpy.c in /home/edwin/Librairie
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Mon Jan 23 12:39:05 2017 edwin
** Last update Mon Jan 23 12:44:48 2017 edwin
*/
#include "library.h"

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (src[i] != '\0' && i < n)
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}
