/*
** remove_matches.c for removes in /home/peau_c/rendu/CPE/CPE_2015_Allum1
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Feb  8 21:20:56 2016 Clement Peau
** Last update Wed Feb 10 15:31:19 2016 Clement Peau
*/

#include "allum1.h"

void remove_matches(t_allum *allum, int matches, int lines)
{
  allum->tab[lines] -= matches;
}
