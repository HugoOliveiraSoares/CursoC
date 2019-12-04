#include <stdio.h>

int main()
{

  int hora, min, hora_f, min_f, hora_t, min_t = 0;

  scanf("%d %d %d %d",&hora, &min, &hora_f, &min_f);

  hora_t = hora_f - hora;

  if (hora_t < 0)
  {
    hora_f = 24 + (hora_f - hora);
  }

  min_t = min_f - min;

  if (min_t < 0 )
  {
    min_t = 60 + (min_f - min);
    hora_t--;
  }

  if (hora_f == hora && min_f == min)
  {
    printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
  }else{
    printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", hora_t, min_t);
  }

  return 0;
}
