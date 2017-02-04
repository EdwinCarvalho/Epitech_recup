/*
** free_tab.c for free_tab.c in /home/edwin/Librairie
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Thu Feb  2 10:00:24 2017 edwin
** Last update Thu Feb  2 10:01:18 2017 edwin
*/
#include "library.h"

void	free_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != '\0')
    {
      free(tab[i]);
      i = i + 1;
    }
  free(tab);
}
