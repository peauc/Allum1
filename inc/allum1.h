/*
** allum1.h for allum1 in /home/peau_c/rendu/CPE/CPE_2015_Allum1
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Feb  8 12:59:12 2016 Clement Peau
** Last update Tue Feb  9 16:50:34 2016 Clement Peau
*/

#ifndef _allum1_
# define _allum1_

#define MY_PUTSTR(X)	write(1, X, my_strlen(X))

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct	s_allum
{
  int		*tab;
  int		line;
  int		max;
  int		star_line;
}		t_allum;

typedef struct	s_chose
{
  int		line;
  int		matches;
}		t_chose;

int check_error_matches(t_allum *, char *, int );
int check_error_line(t_allum *, char *);
int main_calc(t_allum *);
int my_strlen(char *);
void showallum(t_allum *);
int *create_array(t_allum *);

#endif /* _allum1_ */
