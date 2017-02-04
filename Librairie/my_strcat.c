/*
** my_strcat.c for my_strcat.c in /home/edwin/Librairie
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Wed Jan 25 15:00:12 2017 edwin
** Last update Wed Jan 25 15:06:46 2017 edwin
*/
#include "library.h"

char	*my_strcat(char *dest, char *src)
{
  int	a;
  int	b;

  a = 0;
  b = 0;
  while (dest[a] != '\0')
    a = a + 1;
  while (src[b] != '\0')
    {
      dest[a] = src[b];
      a = a + 1;
      b = b + 1;
    }
  dest[a] = '\0';
  return (dest);
}
