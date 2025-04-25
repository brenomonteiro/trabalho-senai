#include <stdio.h>
#include <stdlib.h>

void verificaIdadeBebe(int anoAtual, int anoNascimento);
int main()
{
    int anoAtual, anoNascimento;
    printf("Digite seu ano de nascimento\n");
    scanf("%d",&anoNascimento);
    printf("Digite o ano atual\n");
    scanf("%d",&anoAtual);

    verificaIdadeBebe(anoAtual,anoNascimento);

    return 0;
}


void verificaIdadeBebe(int anoAtual, int anoNascimento){
    int idade = anoAtual - anoNascimento;
    if(idade>= 0 && idade<=3){
        printf("Voce eh um bebe\n");

    }

}
