#include <stdio.h>
#include <stdlib.h>

void verificaIdadeBebe(int anoAtual, int anoNascimento);
void verificaIdadeCrianca(int anoAtual, int anoNascimento);
void verificaIdadeAdulta(int anoAtual, int anoNascimento);
void verificaIdadeIdosa(int anoAtual, int anoNascimento);
int main()
{
    int anoAtual, anoNascimento;
    printf("Digite seu ano de nascimento\n");
    scanf("%d",&anoNascimento);
    printf("Digite o ano atual\n");
    scanf("%d",&anoAtual);

    verificaIdadeBebe(anoAtual,anoNascimento);
    verificaIdadeCrianca(anoAtual, anoNascimento);
    verificaIdadeAdulta(anoAtual, anoNascimento);
    verificaIdadeIdosa(anoAtual, anoNascimento);
    return 0;
}


void verificaIdadeBebe(int anoAtual, int anoNascimento)
{
    int idade = anoAtual - anoNascimento;
    if(idade>= 0 && idade<=3)
    {
        printf("Voce eh um bebe\n");

    }

}

//Rodrigo
void verificaIdadeCrianca(int anoAtual, int anoNascimento)
{
    int idade = anoAtual - anoNascimento;
    if(idade >= 4 && idade <= 10)
    {
        printf("Voce possui a idade de uma crianca\n");
    }
}

//Davi
void verificaIdadeIdosa(int anoAtual, int anoNascimento)
{
    int idade = anoAtual - anoNascimento;

    if(idade >= 51)
        {
        printf("Voce e uma possa idosa\n");
        }
}

//Luiz
void verificaIdadeAdulta(int anoAtual, int anoNascimento)
{
   int idade = anoAtual - anoNascimento;

   if (idade >= 19 && idade <= 50)
   {
     printf("A pessoa e adulta.\n");
   }
}
