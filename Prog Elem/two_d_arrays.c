/*
** two_d_arrays.c for two_d_arrays.c in /home/aidewen/Epitech/C Prog Elem/CPE_2016_BSQ
** 
** Made by Edwin ROCHA CARVALHO
** Login   <aidewen@epitech.net>
** 
** Started on  Mon Dec 12 11:51:24 2016 Edwin ROCHA CARVALHO
** Last update Sun Dec 18 23:41:01 2016 Edwin ROCHA CARVALHO
*/
#include "my.h"

void	array_1d_print_chars(char *arr)
{
  int	i;

  i = 0;
  while (arr[i] != 0)
    {
      my_putchar(arr[i]);
      my_putchar('\n');
      i = i + 1;
    }
}

void	array_1d_print_ints(int *arr, int size)
{
  int	i;

  i = 0;
  while (arr[i] < size)
    {
      my_put_nbr(i);
      my_putchar('\n');
      i = i + 1;
    }
}

int	array_1d_sum(int *arr, int size)
{
  int	i;
  int	sum;

  i = 0;
  sum = 0;
  while (arr[i] < size - 1)
    {
      sum = sum + arr[i];
      i = i + 1;
    }
  my_put_nbr(sum);
  my_putchar('\n');
  return (sum);
}

int	array_2d_sum(int **arr, int nb_rows, int nb_cols)
{
  int	i;
  int	j;
  int	sum;

  i = 0;
  sum = 0;
  while (i < nb_rows)
    {
      j = 0;
      while (j < nb_cols)
	{
	  sum = sum + arr[i][j];
	  j = j + 1;
	}
      i = i + 1;
    }
  return (sum);
}

int	array_2d_how_many(int arr[3][3], int nb_rows, int nb_cols, int number)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  k = 0;
  while (i < nb_rows)
    {
      j = 0;
      while (j < nb_cols)
	{
	  if (arr[i][j] == number)
	    k = k + 1;
	  j = j + 1;
	}
      i = i + 1;
    }
  return (k);
}
