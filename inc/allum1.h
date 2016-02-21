/*
** allum1.h for allum1 in /home/peau_c/rendu/CPE/CPE_2015_Allum1
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Feb  8 12:59:12 2016 Clement Peau
** Last update Sun Feb 21 23:17:38 2016 Clement Peau
*/

#ifndef _allum1_
# define _allum1_

#define MY_PUTSTR(X)	write(1, X, my_strlen(X) - 1)

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

typedef struct	s_allum
{
  int		*tab;
  int	 	line;
  int		max;
  int		star_line;
  int		mode;
  int		turn;
}		t_allum;

typedef struct	s_chose
{
  int		line;
  int		matches;
}		t_chose;

/*
** IA
*/

void ia_rdm(t_allum *);
void ia_xor(t_allum *);

/*
** GESTION D'ERREUR
*/

int check_error_matches(t_allum *, char *, int );
int check_error_line(t_allum *, char *);
int check_win(t_allum *, int);
void is_a_single_line(t_allum *, int, int);
void remove_matches(t_allum *, int, int);


/*
** UTILS
*/

char *get_next_line(const int);
int my_strlen(char *);
int getnbr(char *);
void putnbr(int );
void showallum(t_allum *);

/*
** CREATION DE TABLEAU
*/

int decal_max(t_allum *);
int *create_array(t_allum *);
int *create_array(t_allum *);

/*
** DEROULEMENT DU JEU
*/

int main_calc(t_allum *);
int chose_dif(t_allum *);

#endif /* _allum1_ */
