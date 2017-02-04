/*
** my_tablen.c for my_tablen.c in /home/edwin/Librairie
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Thu Feb  2 09:58:50 2017 edwin
** Last update Thu Feb  2 09:59:47 2017 edwin
*/
#include "library.h"

int	my_tablen(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != '\0')
    i = i + 1;
  return (i);
}
