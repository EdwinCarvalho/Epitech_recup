/*
** my_strstr.c for my_strstr.c in /home/edwin/Librairie
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Mon Jan 23 14:45:41 2017 edwin
** Last update Tue Jan 24 20:47:26 2017 edwin
*/
#include "library.h"

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  j = 0;
  k = 0;
  while ((str[i] != '\0') && (to_find[j] != '\0'))
    {
      if (str[i] == to_find[j])
	{
	  if (j == 0)
	    k = i;
	  j = j + 1;
	}
      else
	j = 0;
      i = i + 1;
    }
  if (to_find[j] == '\0')
    return (&str[k]);
  else
    return (0);
}
