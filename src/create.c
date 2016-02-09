/*
** create.c for create in /home/peau_c/rendu/CPE/Allum1
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Sat Feb  6 17:20:06 2016 Clement Peau
** Last update Tue Feb  9 16:36:01 2016 Clement Peau
*/

#include "allum1.h"

int	*create_array(t_allum *allum)
{
  int	i;

  i = -1;
  if ((allum->tab = malloc((allum->line + 1) * sizeof(int *))) == NULL)
    return (NULL);
  allum->tab[allum->line] = -1;
  while (++i < allum->line)
    {
      allum->tab[i] = i * 2 + 1;
      printf("tab[%d] = %d\n", i, allum->tab[i]);
    }
  allum->max = decal_max(allum);
  showallum(allum);
  return (allum->tab);
}
