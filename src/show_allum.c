/*
** show_allum.c for allum1 in /home/peau_c/rendu/CPE/CPE_2015_Allum1
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Feb  8 12:50:57 2016 Clement Peau
** Last update Tue Feb  9 16:54:27 2016 Clement Peau
*/

#include "allum1.h"

int	decal_max(t_allum *allum)
{
  int	i;
  int	max;

  i = -1;
  while (allum->tab[++i] != -1)
    {
      max = allum->tab[i];
    }
  allum->star_line = max;
  return (max = max / 2);
}

void	star_line(t_allum *allum)
{
  int	i;

  i = 0;
  while (i < allum->star_line)
    {
      write(1, "*", 1);
      i++;
    }
  write(1, "\n", 1);
}

void	showallum(t_allum *allum)
{
  int	i;
  int	allumin;
  int	decal;
  int	count;

  decal = allum->max;
  i = -1;
  printf("decal = %d\n", allum->max);
  star_line(allum);
  while (allum->tab[++i] != -1)
    {
      allumin = 0;
      write(1, "*", 1);
      count = 0;
      while (count++ != decal)
	write(1, " ", 1);
      while (allumin++ < allum->tab[i])
	write(1, "|", 1);
      count = 0;
      while (count++ != decal)
	write(1, " ", 1);
      write(1, "*", 1);
      write(1, "\n", 1);
      decal--;
    }
  star_line(allum);
}
