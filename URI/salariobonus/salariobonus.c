#include <stdlib.h>
#include <stdio.h>

int main()
{
  char nome = 0;
  double salario = 0;
  double vendas = 0;
  double comissao;

  scanf("%s",&nome);
  scanf("%lf",&salario);
  scanf("%lf",&vendas);

  comissao = 0.15 * vendas;
  salario += comissao;

  printf("TOTAL = R$ %.2lf\n", salario );

  return 0;
}
