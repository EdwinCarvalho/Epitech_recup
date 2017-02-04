/*
** who_sig_me.c for who_sig_me.c in /home/edwin/Epitech/Navy/PSU_2016_navy_bootstrap/srcs
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Mon Jan 30 10:01:21 2017 edwin
** Last update Wed Feb  1 13:45:44 2017 edwin
*/
#include "../includes/library.h"
#include <unistd.h>
#include <signal.h>
#include <string.h>

void	put_something(int sig, siginfo_t *siginfo, void *context)
{
  my_putstr("Signal ");
  my_putstr(strsignal(sig));
  my_putstr(" received from ");
  my_putnbr(siginfo->si_pid);
  my_putchar('\n');
  return ;
}

int	who_sig_me(int argc, char **argv)
{
  struct sigaction	action;
  pid_t			pid;

  pid = getpid();
  action.sa_sigaction = put_something;
  action.sa_flags = SA_SIGINFO;
  sigaction(10, &action, NULL);
  sigaction(12, &action, NULL);
  while (1);
  return (0);
}
