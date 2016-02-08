/*
** main.c for mainc in /home/peau_c/rendu/CPE/Allum1
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Sat Feb  6 17:17:30 2016 Clement Peau
** Last update Sat Feb  6 17:29:30 2016 Clement Peau
*/
int	main(int ac, char **av)
{
  int	alum_count;

  if (av[1] != NULL)
    alum_count = atoi(av[1]);
  create_array();
}
