/*
** signal_me.c for signal_me.c in /home/edwin/Epitech/Navy/PSU_2016_navy_bootstrap/srcs
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Tue Jan 31 16:56:16 2017 edwin
** Last update Wed Feb  1 14:26:39 2017 edwin
*/
#include "../includes/library.h"
#include <string.h>
#include <unistd.h>
#include <signal.h>

void	my_put_something(int sig, siginfo_t *siginfo, void *context)
{
  static int	cmp = 0;
  static int	cmp2 = 0;

  if (sig == 10)
    cmp = cmp + 1;
  if (sig == 12)
    cmp2 = cmp2 + 1;
  if (sig == 3)
    {
      my_putstr("SIGUSR1 : ");
      my_putnbr(cmp);
      my_putchar('\n');
      my_putstr("SIGUSR2 : ");
      my_putnbr(cmp2);
      exit(EXIT_SUCCESS);
    }
  return ;
}

int	main(int argc, char **argv)
{
  struct sigaction	action;
  pid_t			pid;

  pid = getpid();
  action.sa_sigaction = my_put_something;
  action.sa_flags = SA_SIGINFO;
  sigaction(10, &action, NULL);
  sigaction(12, &action, NULL);
  sigaction(3, &action, NULL);
  while (1);
  return (0);
}
