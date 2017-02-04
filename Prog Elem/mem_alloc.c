/*
** mem_alloc.c for mem_alloc.c in /home/aidewen/Epitech/C Prog Elem/CPE_2016_BSQ
** 
** Made by Edwin ROCHA CARVALHO
** Login   <aidewen@epitech.net>
** 
** Started on  Mon Dec 12 13:54:49 2016 Edwin ROCHA CARVALHO
** Last update Sun Dec 18 23:40:47 2016 Edwin ROCHA CARVALHO
*/
#include "my.h"
#include <stdlib.h>

char	*my_strcpy_mod(char *dest, char *src_a, char *src_b)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (src_a[i] != 0)
    {
      dest[i] = src_a[i];
      while (src_b[j] != 0)
	{
	  dest[j] = src_b[i];
	  j = j + 1;
	}
      i = i + 1;
    }
  i = i + 1;
  j = j + 1;
  dest[j] = '\0';
  dest[i] = '\0';
  return (dest);
}

int	mem_alloc(char *a, char *b)
{
  char	*c;
  int	lenght;

  lenght = my_strlen(a) + my_strlen(b);
  c = NULL;
  c = malloc(lenght + 1);
  if (c == NULL)
    return (1);
  my_strcpy_mod(c, a, b);
  free(c);
  return (0);
}

void	OOOmem_alloc_2d_array(int nb_rows, int nb_cols)
{
  char	**tab;
  int	i;
  
  i = 0;
  tab = malloc(nb_rows * sizeof(*tab));
  while (i < nb_rows)
    {
      tab[i] = malloc((nb_cols + 1) * sizeof(**tab));
      i = i + 1;
    }
  while (i < nb_rows)
    {
      free(tab[i]);
      i = i + 1;
    }
  free(tab);
}

char	**mem_alloc_2d_array(int nb_rows, int nb_cols)
{
  char	**tab;
  char	*tab2;
  int	i;

  i = 0;
  tab = (char **)malloc(sizeof(char*) * nb_rows);
  tab2 = (char *)malloc(sizeof(char)* nb_cols * nb_rows);
  if (tab == NULL || tab2 == NULL)
    my_putstr("Failed allocation");
  while (i < nb_rows)
    {
      tab[i] = &tab2[i * nb_cols];
      i = i + 1;
    }
  return (tab);
}

void	free_mem(char **tab)
{
  free(tab[0]);
  free(tab);
}
