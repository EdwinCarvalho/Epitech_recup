/*
** my_strlen.c for my_strlen.c in /home/edwin/Librairie
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Mon Jan 23 11:35:25 2017 edwin
** Last update Mon Jan 23 12:49:00 2017 edwin
*/
#include "library.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}
