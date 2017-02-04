/*
** my_putnbr.c for my_putnbr.c in /home/edwin/Librairie
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Mon Jan 23 11:39:11 2017 edwin
** Last update Thu Jan 26 09:09:40 2017 edwin
*/
#include "library.h"

int	my_putnbr(int nb)
{
  if (nb == -2147483647 - 1)
    {
      my_putchar('-');
      my_putchar('2');
      nb = 147483648;
      my_putnbr(nb);
    }
  else if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
      my_putnbr(nb);
    }
  else if (nb >= 0 && nb <= 9)
    my_putchar(nb + '0');
  else
    {
      my_putnbr(nb / 10);
      my_putnbr(nb % 10);
    }
  return (0);
}
