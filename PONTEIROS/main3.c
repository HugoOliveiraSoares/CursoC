#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  struct horario
  {
    int hora;
    int minuto;
    int segundo;
  };


  struct horario agora, *depois;
  depois = &agora;

  depois->hora = 20; //(*depois).hora = 20;
  depois->minuto = 80; //(*depois).minuto = 20;
  depois->segundo = 50; //(*depois).segundo = 20;

  int somatorio = 100;

  struct horario antes;

  antes.hora = somatorio + depois->hora;
  antes.minuto = agora.hora + depois->minuto;
  antes.segundo = depois->minuto + depois->segundo;


  //printf("%i:%i:%i\n",agora.hora, agora.minuto, agora.segundo);

  printf("%i:%i:%i\n",antes.hora, antes.minuto, antes.segundo);



  return 0;
}
