/*
** my_power_rec.c for my_power_rec.c in /home/edwin/Librairie
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Mon Jan 23 11:45:09 2017 edwin
** Last update Thu Jan 26 09:09:21 2017 edwin
*/
#include "library.h"

int	my_power_rec(int nb, int power)
{
  int	return_value;

  if (power < 0)
    return (0);
  else if (power == 0)
    return (1);
  else if (power > 1 || power < 12)
    {
      return_value = my_power_rec(nb, power - 1) * nb;
      if (return_value < 0)
	return (0);
      else
	return (return_value);
    }
  else
    return (nb);
}
