//recebe nota de N alunos, perguntando se deseja continuar, soma e d� a m�dia.

#include<stdio.h>
#include<locale.h>

int qtd = 1;

float solicitaNota(float pts)
{
	printf("Deseja informar outra nota? S/N: ");
	char resp;
	scanf("%s", &resp);
	
	if(resp == 'S' || resp == 's')
	{
		printf("\ninforme a nota do pr�ximo aluno: ");
		float nota2;
		scanf("%f", &nota2);
		
		qtd += 1;
		
		return(solicitaNota(pts + nota2));
	}
	else
		return pts;
}

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil"); //Formata para todos os padr�es do Brasil (acentua��o, moeda, etc.) 
	
	printf("informe a nota do primeiro aluno: ");
	float nota, pts;
	scanf("%f", &nota);	
	
	pts = solicitaNota(nota);
	
	if(qtd == 1)
		printf("\nO aluno tem m�dia de %.2f\n", pts);
	else
		printf("\nOs %i alunos somam %.2f pontos com m�dia de %.2f\n", qtd, pts, pts / qtd);
	
	return 0;
}
