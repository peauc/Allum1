/*
** remove_matches.c for removes in /home/peau_c/rendu/CPE/CPE_2015_Allum1
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Feb  8 21:20:56 2016 Clement Peau
** Last update Sat Feb 20 12:24:16 2016 Clement Peau
*/

#include "allum1.h"

void	is_a_single_line(t_allum *allum, int matches, int lines)
{
  int	i;
  int	j;
  int	k;

  k = 0;
  j = 0;
  i = 0;
  while (allum->tab[i] != -1)
    {
      k += allum->tab[i];
      if (allum->tab[i] > 0)
	j++;
      i++;
    }
  if (j == 1 && k != 1)
    remove_matches(allum, matches - 1, lines);
  else
    remove_matches(allum, matches, lines);
  MY_PUTSTR("\nAI's turn...\n");
  MY_PUTSTR("AI removes ");
  putnbr(matches);
  MY_PUTSTR(" match(es) from line ");
  putnbr(lines);
  write(1, "\n", 1);
}

void	remove_matches(t_allum *allum, int matches, int lines)
{
  allum->tab[lines] -= matches;
}
