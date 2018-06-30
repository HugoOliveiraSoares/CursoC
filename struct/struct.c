#include<stdio.h>
#include<stdlib.h>

struct cadastro
{
	char nome;
	int idade;
	char rua;
	int num;
};


int main()
{
	struct cadastro c;
	printf("Faça seu cadastro\n");

	printf("Nome:");
	gets("%c",&c.nome);

	printf("Idade:");
	gets("%i",&c.idade);

	printf("Rua:");
	gets("%c",&c.rua);

	printf("Numero da casa:");
	gets("%i",&c.num);
}
