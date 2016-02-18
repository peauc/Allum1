/*
** ia.c for ia in /home/peau_c/rendu/CPE/CPE_2015_Allum1
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Wed Feb 10 14:07:02 2016 Clement Peau
** Last update Thu Feb 11 13:23:40 2016 Clement Peau
*/

#include "allum1.h"

void	ia(t_allum *allum)
{
  int	ligne;
  int	allumettes;

  MY_PUTSTR("\nAI's turn...\n");
  ligne = rand() % allum->line;
  if (ligne == 0)
    ligne++;
  while (allum->tab[ligne - 1] == 0)
      ligne = rand() % (allum->line + 1);
  allumettes = rand() % allum->tab[ligne - 1];
  if (allumettes == 0)
    allumettes++;
  MY_PUTSTR("AI's removed ");
  putnbr(allumettes);
  MY_PUTSTR(" match(es) from line ");
  putnbr(ligne);
  MY_PUTSTR("\n");
  remove_matches(allum, allumettes, ligne - 1);
}
