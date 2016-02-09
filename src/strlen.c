/*
** strlen.c for strlen in /home/peau_c/rendu/CPE/CPE_2015_Allum1
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Feb  8 16:06:43 2016 Clement Peau
** Last update Mon Feb  8 16:21:38 2016 Clement Peau
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i++] != 0);
  return (i);
}
