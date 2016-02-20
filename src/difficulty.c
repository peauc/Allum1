/*
** difficulty.c for dif in /home/peau_c/rendu/CPE/CPE_2015_Allum1
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Feb 19 19:24:02 2016 Clement Peau
** Last update Sat Feb 20 12:30:28 2016 Clement Peau
*/

#include "allum1.h"

int	chose_dif(t_allum *allum)
{
  showallum(allum);
  if (allum->mode == 1)
    ia_rdm(allum);
  else
    ia_xor(allum);
  return (0);
}
