/*
** my_strncat.c for my_strncat.c in /home/edwin/Librairie
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Wed Jan 25 15:06:59 2017 edwin
** Last update Wed Jan 25 15:34:45 2017 edwin
*/
#include "library.h"

char	*my_strncat(char *dest, char *src, int nb)
{
  int	dest_lng;
  int	i;

  dest_lng = my_strlen(dest);
  i = 0;
  while (i < nb && src[i] != '\0')
    {
      dest[dest_lng + i] = src[i];
      i = i + 1;
    }
  dest[dest_lng + i] = '\0';
  return (dest);
}
