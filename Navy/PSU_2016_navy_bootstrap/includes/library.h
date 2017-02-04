/*
** library.h for library.h in /home/edwin/Librairie
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Wed Jan 25 15:45:46 2017 edwin
** Last update Thu Jan 26 09:11:00 2017 edwin
*/

#ifndef LIBRARY_H_
# define LIBRARY_H_
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct	s_str_wordtab
{
  char		**tab;
  int		i;
  int		j;
  int		k;
}		t_str_wordtab;

void	my_putchar(char c);
void	my_puterror(char c);
void	my_show_wordtab(char **tab);
int	my_strlen(char *str);
int	my_putstr(char *str);
int	my_strerror(char *str);
int	my_putnbr(int nb);
int	my_power_rec(int nb, int power);
int	my_getnbr(char *str);
int	my_is_prime(int nb);
int	my_swap(int *a, int *b);
int	find_word(char *str);
int	my_str_isalpha(char *str);
int	my_str_isnum(char *str);
int	my_strcmp(char *s1, char *s2);
int	my_strncmp(char *s1, char *s2, int n);
char	*my_revstr(char *str);
char	*my_strcapitalize(char *str);
char	*my_strcat(char *dest, char *src);
char	*my_strcpy(char *dest, char *src);
char	*my_strlowcase(char *str);
char	*my_strncat(char *dest, char *src, int nb);
char	*my_strncpy(char *dest, char *src, int n);
char	*my_strstr(char *str, char *to_find);
char	*my_str_upcase(char *str);
char	*my_strdup(char *src);
char	**my_str_to_wordtab(char *str, char delimiter);

#endif /* !LIBRARY_H_ */
