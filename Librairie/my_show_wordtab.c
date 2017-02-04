/*
** my_show_wordtab.c for my_show_wordtab.c in /home/edwin/Librairie
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Wed Jan 25 19:27:44 2017 edwin
** Last update Wed Jan 25 19:50:12 2017 edwin
*/
#include "library.h"

void	my_show_wordtab(char **tab)
{
  int	i;
  int	j;

  i = 0;
  while (tab[i] != '\0')
    {
      j = 0;
      while (tab[i][j] != '\0')
	{
	  my_putchar(tab[i][j]);
	  j = j + 1;
	}
      my_putchar('\n');
      i = i + 1;
    }
}
