/*
** my_str_to_wordtab.c for my_str_to_wordtab.c in /home/edwin/Librairie
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Wed Jan 25 19:51:36 2017 edwin
** Last update Thu Jan 26 09:05:03 2017 edwin
*/
#include "library.h"

int	nbr_words(char *str, char delimiter)
{
  int	nbr;
  int	i;

  nbr = 1;
  i = 0;
  while (str[i] != '\n' && str[i] != '\0')
    {
      if (str[i] == delimiter && str[i + 1] != '\0')
	nbr = nbr + 1;
      i = i + 1;
    }
  return (nbr);
}

int	w_len(char *str, char delimiter)
{
  int	lenght;

  lenght = 0;
  while ((str[lenght] != delimiter)
	 && (str[lenght] != '\0')
	 && (str[lenght] != '\n'))
    lenght = lenght + 1;
  lenght = lenght + 1;
  return (lenght);
}

void	var(t_str_wordtab *x)
{
  x->tab = NULL;
  x->i = 0;
  x->j = 0;
  x->k = 0;
}

void	check(char *str, char delimiter, t_str_wordtab *x)
{
  if (str[x->i] == delimiter || str[x->i] == '\n')
    {
      while (str[x->i] == delimiter)
	x->i = x->i + 1;
      x->j = x->j + 1;
      x->k = 0;
    }
}

char		**my_str_to_wordtab(char *str, char delimiter)
{
  t_str_wordtab	x;

  var(&x);
  x.tab = malloc(sizeof(*x.tab) * ((nbr_words(str, delimiter) + 1)));
  if (x.tab == NULL)
    return (NULL);
  while (str[x.i] != '\0')
    {
      check(str, delimiter, &x);
      x.tab[x.j] = malloc(sizeof(**x.tab) * (w_len(str + x.i, delimiter) + 1));
      if (x.tab[x.j] == NULL)
	return (NULL);
      while ((str[x.i] != delimiter)
	     && (str[x.i] != '\n') && (str[x.i] != '\0'))
	{
	  x.tab[x.j][x.k] = str[x.i];
	  x.k = x.k + 1;
	  x.i = x.i + 1;
	}
      x.tab[x.j][x.k] = '\0';
    }
  x.tab[x.j + 1] = 0;
  return (x.tab);
}
