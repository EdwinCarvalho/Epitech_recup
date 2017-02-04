/*
** my_strcapitalize.c for my_strcapitalize.c in /home/edwin/Librairie
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Mon Jan 23 15:03:16 2017 edwin
** Last update Mon Jan 23 15:12:44 2017 edwin
*/
#include "library.h"

char	*my_strcapitalize(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	{
	  if (str[i - 1] != ' ')
	    str[i] = str[i] + 32;
	}
      if (str[i] >= 'a' && str[i] <= 'z')
	{
	  if (str[i - 1] >= ' ' && str[i - 1] <= '/')
	    str[i] = str[i] - 32;
	}
      i = i + 1;
    }
  if (str[0] >= 'a' && str[0] <= 'z')
    str[0] = str[0] - 32;
  return (str);
}
