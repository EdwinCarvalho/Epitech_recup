/*
** my_is_prime.c for my_is_prime.c in /home/edwin/Librairie
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Mon Jan 23 11:48:08 2017 edwin
** Last update Thu Jan 26 09:08:49 2017 edwin
*/
#include "library.h"

int	my_is_prime(int nb)
{
  int	a;

  if (nb < 2)
    return (0);
  else if (nb == 2)
    return (1);
  else if (nb % 2 == 0)
    return (0);
  else
    {
      a = 3;
      while (a * a <= nb)
	{
	  if ((nb % a) == 0)
	    return (0);
	  a = a + 2;
	}
    }
  return (0);
}
