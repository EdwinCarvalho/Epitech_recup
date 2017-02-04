/*
** my_swap.c for my_swap.c in /home/edwin/Librairie
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Mon Jan 23 11:42:17 2017 edwin
** Last update Mon Jan 23 11:44:11 2017 edwin
*/
#include "library.h"

int	my_swap(int *a, int *b)
{
  int	exchange;

  exchange = *a;
  *a = *b;
  *b = exchange;
  return (0);
}
