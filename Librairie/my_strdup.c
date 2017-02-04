/*
** my_strdup.c for my_strdup.c in /home/edwin/Librairie
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Wed Jan 25 16:02:23 2017 edwin
** Last update Wed Jan 25 19:23:56 2017 edwin
*/
#include "library.h"

char	*my_strdup(char *src)
{
  char	*new_string;

  new_string = NULL;
  new_string = malloc(my_strlen(src));
  if (new_string == NULL)
    return (NULL);
  my_strcpy(new_string, src);
  return (new_string);
}
